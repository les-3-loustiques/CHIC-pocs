beats = [2,0,1,0,1,0,1,0] # metronome
bpm = 90
use_bpm bpm
gap = [0.5, 1.0] # on peut avoir soit des croches (1) soit des doubles croches (0.5)
use_synth :piano # on joue avec un piano
use_random_seed 600 # changer la graine pour changer la séquence
result_sequence = [] # sequence générée par le programme
captured_sequence = [] # sequence générée par le joueur
final = [] # contiendra la différence des deux tableaux ci-dessus
note_number = 0 # nombre de note que le joueur doit faire
stop_flag = false # flag d'arrêt de jeu

# vide le fichier
#File.open('sample.out','w') { |s|
#  s.puts "bpm : #{bpm}"
#}

# metronome
in_thread(name: :thr) do
  loop do
    tick
    sample :elec_plip, amp: 1, rate: 0.8 if beats.ring.look == 1
    sample :elec_plip, amp: 2 if beats.ring.look == 2
    sleep 0.5
    if (stop_flag == true)
      exit
    end
  end
end

# melodie à jouer
4.times do # 4 temps
  n = gap.choose # chosit si double ou simple croche
  t = (1.0/n).round # si simple (1) ou double (2) croche
  note_number += t
  t.times do # joue la note plusieurs fois si c'est une double croche par exemple
    temp = play :G3, amp: 1, release: 2
    result_sequence.push(Time.now)
    sleep n
  end
  # insère la note dans le fichier
  #File.open('sample.out','a+') { |s|
  #  s.puts t
  #}
end
# ce qui nous intéresse c'est les intervalles de temps seulement
for i in 0..(result_sequence.length - 2)
  result_sequence[i] =  result_sequence[i+1] - result_sequence[i]
end
result_sequence.pop # supprime dernier élément du tableau qui est inutile
puts result_sequence
while (stop_flag == false) do
    while (captured_sequence.length < note_number) do # tant que le joueur n'a pas effectuer toute ses notes
        nv=sync "/osc/notesend"
        captured_sequence.push(Time.now)
        play :B3, amp: 2, release: 2
      end
      
      for i in 0..(captured_sequence.length - 2)
        captured_sequence[i] = captured_sequence[i+1] - captured_sequence[i]
      end
      captured_sequence.pop # supprime dernier élément du tableau qui est inutile
      puts captured_sequence
      
      # on soustrait les éléments pour voir la différence
      for i in 0..(captured_sequence.length - 1)
        final.push((captured_sequence[i] - result_sequence[i]).abs)
      end
      puts final
      
      # conditions d'arrêt
      if (final.max < 0.3)
        puts "win"
        sample :guit_harmonics, amp: 1
        stop_flag = true
      else
        puts "retry"
        sample :misc_burp, amp: 1, release: 2
        captured_sequence = []
        final = []
        # si pas de sleep plante sous windows
      end
      
    end
    abort
    
    

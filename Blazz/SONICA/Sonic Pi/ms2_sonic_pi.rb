
beats = [2,0,1,0,1,0,1,0] # metronome
bpm = 90
use_bpm bpm
gap = [0.5, 1.0] # on peut avoir soit des croches (1) soit des doubles croches (0.5)
use_synth :piano # on joue avec un piano
use_random_seed 600 # changer la graine pour changer la séquence

# vide le fichier
File.open('C:\\Users\\Gabriel\\Desktop\\CHIC-pocs-master\\CHIC-pocs-master\\Blazz\\SONICA\\Sonic Pi\\sample.out','w') { |s|
  s << "bpm : #{bpm}\n"
}

# metronome
in_thread do
  loop do
    tick
    sample :elec_plip, amp: 1, rate: 0.8 if beats.ring.look == 1
    sample :elec_plip, amp: 2 if beats.ring.look == 2
    sleep 0.5
  end
end

# melodie à jouer
4.times do # 4 temps
  n = gap.choose # chosit si double ou simple croche
  t = (1.0/n).round # si simple (1) ou double (2) croche
  t.times do # joue la note plusieurs fois si c'est une double croche par exemple
    temp = play :G3, amp: 1, release: 2
    sleep n
  end
  # insère la note dans le fichier
  File.open('C:\\Users\\Gabriel\\Desktop\\CHIC-pocs-master\\CHIC-pocs-master\\Blazz\\SONICA\\Sonic Pi\\sample.out','a+') { |s|
    s.puts t
  }
end


activated = false

live_loop :foo do
  nv=sync "/osc/notesend"
  /vect = Math.sqrt(nv[0]**2+nv[1]**2+nv[2]**2)
  puts "vect: ",vect/
  if (nv[0] > 550) or (nv[1] > 550) or (nv[2] > 550)
    sleep 0.5
    puts "toggle"
    activated = !activated
  end
  if (activated == false)
    /sleep 0.01/
  end
  
  if (activated == true)
    use_synth :piano
    play nv[0]/4, amp: nv[2]/150
    
    sleep nv[1]/1800
end



end


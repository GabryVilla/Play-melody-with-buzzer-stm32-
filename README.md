# Play-melody-with-buzzer-stm32-
I wrote this function so that you will play some note with your buzzer.
This sketch use a PWM timer, and change the prescaler in such a way you can play a frequency.
========================================================================================


youtube video : 


=========================================================================================
stm32 configuration that you need to edit:


  >clock source: internal clock
    
    
  >channel 2: PWM Generation CH2


  >counter settings:


  ==> prescaler = 0
  
  
  ==> counter period: 255
  
  
  >PWM generator channel 2


  ==> pulse: 127
  
  
=========================================================================================


example how to calculate the prescaler for a specific note:


NoteFrequency : 440 hz  ( 440 hz == A )


CounterPeriod: 255


InternalClock (see how much is set the internal clock of the STM32): 64MHZ


prescaler = InternalClock / (CounterPeriod * NoteFrequency * 3)


prescaler = 64 MHZ / (255 * 440HZ * 3) = 190 


=========================================================================================

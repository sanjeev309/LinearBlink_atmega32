# LinearBlink_atmega32
Linear blinking pattern on PORT D
</br></br>
Here the delay has been provided a static value.  </br>
To produce a incrementing or decrementing delay review the following code:  </br>

.... </br>
int del=100;   </br>
_delay_ms(del--);    //  WON'T WORK! => As of Atmel studi 4, the _delay_ms() function needs to be provided a constant; </br>
.... </br>

INSTEAD USE: </br>

void delay_ms(uint16_t delay){                      // own function to pass a dynamic value of delay  </br>
  while(delay--){    </br>
  _delay_ms(delay);   </br>
  }  </br>
}   </br>

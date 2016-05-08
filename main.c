

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{   int n=0;
   DDRD=0xff;          // Set port D as output
   
     while (1)                // Infinite loop
    { 
		
		 while(n!=7)
			{ PORTD=(1<<n)|(1<<(n+1));           //Stream two led's across at a time :Right 
			_delay_ms(6);                         
			n++;	
			  }
	
	   	  while(n!=0)
			 { PORTD=(1<<n)|(1<<(n-1));         //Left
			 _delay_ms(6);
	                  n--;
 			  }
	}
}




#include <avr/io.h>
#include <util/delay.h>

int main(void)
{   int n=0;
   DDRD=0xff;
   
     while (1) 
    { 
		
		 while(n!=7)
			{ PORTD=(1<<n)|(1<<(n+1));
			_delay_ms(6);
			n++;	
			  }
	
	   	  while(n!=0)
			 { PORTD=(1<<n)|(1<<(n-1));
			 _delay_ms(6);
	        n--;
 			  }
	}
}


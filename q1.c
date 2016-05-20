#include "iq.h"
#define byte unsigned char
byte *trisb = 0xf93 ;
byte *portb = 0xf81 ;
byte *trisd = 0xf95 ;
byte *portd = 0xf83 ;
/* a compléter */

void affiche_7seg(byte val)
{
byte tab_7seg[]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,
0b01111101,0b00000111,0b01111111,0b01101111};
*portd=tab_7seg[val];
}

int test_plus()
{
	int res = 0;
	if (*portb== 1)
	{
		res = 1;
	}	
	
	return res;
}


int test_moins()
{
	int res = 0;
	if (*portb== 2)
	{
		res = 1;
	}
	return res;
}


void main(void)
{
int i=0;
*trisd = 0 ;
*trisb = 0xff;
affiche_7seg(i);
for(i=0;i<4;i++)
while(1)
{
	if (test_plus()== 1)
	{
		while ( test_plus()); 
		if (i < 9) 
			i++;
		else i=0;
		affiche_7seg(i);
	}

	if (test_moins()== 1)
	{
		while ( test_moins()); 
		if (i > 0) 
			i--;
		else i=0;
		affiche_7seg(i);
	}
	}
}
/** Autre méthode possible ( car pb quand + et - sont égales a 1)

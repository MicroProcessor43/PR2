#include <8051.h>
void main()
{
	unsigned int i,j;
	unsigned char massiv [11]=
	{
		0xC0, //?????? ????? ??????????????? ??????????
		0xF9,
		0xA4,
		0xB0,
		0x99,
		0x92,
		0x82,
		0xF8,
		0x80,
		0x90,
		0xFF //??? ???????
	};
	P2=massiv[10];
	P1=0x00;
	while(1)
	{
		for(i=0;i<11;i++)
		{
			if(P10 > 0)
			{
				P2 = massiv[i];
				for(j=0;j<50;j++){continue;}		
				P2 = 0xF9;
				for(j=0;j<50;j++){continue;}		
			}
			else{P2=massiv[10];break;}
		}
	}
	P2=massiv[10];
	while(1);
	
}
#include <8051.h>


void main()
{
 char symbol[3][5]={{'0','1','2','3','4'},
					{' ','+',' ',' ','*'},
                   {'5','6','7','8','9'}};
unsigned int count1;
unsigned int count2;
unsigned int count3;
unsigned int counter1;
unsigned int counter;
unsigned int countBL;
unsigned int counter2;

 P0 = 0x38;
 P2 = 0x1;
 P2 = 0x0;
 P0 = 0x80;
 P2 = 0x1;
 P2 = 0x0;

counter1 = 0;
counter = 0;
counter2 = 0;
count1=1;
count2 = 1;
count3 = 1;
countBL = 0;

while(1)
{
	P10 = 0;//1stroka
	if (count1==1)
	{
  		if(P13 == 0)
  		{ 
			P0 = symbol[0][4]; 
			P2 = 0x3; 
			P2 = 0x2;
			count1 = 0;
			counter1 = symbol[0][4]-48;
  		}
  		if(P14 == 0)
  		{ 
			P0 = symbol[0][3]; 
			P2 = 0x3; 
			P2 = 0x2;
			counter1 = symbol[0][3]-48;
			count1 = 0;
		}
		if(P15 == 0)
  		{ 
			P0 = symbol[0][2]; 
			P2 = 0x3; 
			P2 = 0x2;
			counter1 = symbol[0][2]-48;
			count1 = 0;
		}
		if(P16 == 0)
  		{ 
			P0 = symbol[0][1]; 
			P2 = 0x3; 
			P2 = 0x2;
			counter1 = symbol[0][1]-48;
			count1 = 0;
		}
		if(P17 == 0)
  		{ 
			P0 = symbol[0][0]; 
			P2 = 0x3; 
			P2 = 0x2;
			counter1 = symbol[0][0]-48;
			count1 = 0;
		}
	}
	P10 = 1;

	P11 = 0;//2stroka
	if (count2==1)
		{
  			if(P13 == 0)
  			{ 
				P0 = symbol[1][4]; 
				P2 = 0x3; 
				P2 = 0x2;
				count2 = 0;
				countBL = 2;
  			}
			if(P16 == 0)
  			{ 
				P0 = symbol[1][1]; 
				P2 = 0x3; 
				P2 = 0x2;
				countBL = 1;
				count2 = 0;
			}
		}
		if(P14 == 0)
  			{ 
				P0 = 0x01;
  				P2 = 0x1;
  				P2 = 0x0;
				counter1 = 0;
				counter = 0;
				counter2 = 0;
				count1=1;
				count2 = 1;
				count3 = 1;
				countBL = 0;
			}
		P11 = 1;

  P12 = 0;//3stroka
  if (count3==1)
	{
  		if(P13 == 0)
  		{ 
			P0 = symbol[2][4]; 
			P2 = 0x3; 
			P2 = 0x2;
			count3 = 0;
			counter2 = symbol[2][4]-48;
			counter = 1;
  		}
  		if(P14 == 0)
  		{ 
			P0 = symbol[2][3]; 
			P2 = 0x3; 
			P2 = 0x2;
			count3 = 0;
			counter2 = symbol[2][3]-48;
			counter = 1;
		}
		if(P15 == 0)
  		{ 
			P0 = symbol[2][2]; 
			P2 = 0x3; 
			P2 = 0x2;
			count3 = 0;
			counter2 = symbol[2][2]-48;
			counter = 1;
		}
		if(P16 == 0)
  		{ 
			P0 = symbol[2][1]; 
			P2 = 0x3; 
			P2 = 0x2;
			count3 = 0;
			counter2 = symbol[2][1]-48;
			counter = 1;
		}
		if(P17 == 0)
  		{ 
			P0 = symbol[2][0]; 
			P2 = 0x3; 
			P2 = 0x2;
			count3 = 0;
			counter2 = symbol[2][0]-48;
			counter = 1;
		}
	}	
	P12=1;

	if (counter == 1)//TWONUMBERENTER
	{
		P0='=';
		P2 = 0x3; 
		P2 = 0x2;
		if(countBL==1)
{
		counter = counter1+counter2;
}
else
{
		counter = counter1*counter2;
}
		if (counter>9)
		{
			P0= counter/10 +48;
			P2 = 0x3; 
			P2 = 0x2;
			P0 = counter%10+48;
			P2 = 0x3; 
			P2 = 0x2;
		}
		else
		{
			P0 = counter+48;
			P2 = 0x3; 
			P2 = 0x2;
		}
	}
}
}



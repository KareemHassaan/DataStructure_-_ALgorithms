#include<stdio.h>
#include"STD_TYPES.h"
#define SIZE 10

uint8 itter;
uint8 TextArray[SIZE] = {'(','[',')','{',']','}'};
uint8 Counter[6] = {};
uint8 PopOut = 0;

void main(void)
{
	for(itter = 0; itter < SIZE; itter++)
	{
		Push(TextArray[itter]);
	}
	for(itter = 0; itter < SIZE; itter++)
	{
		PopOut = Pop();
		
		switch(PopOut)
		{
			case '(':
				Counter[0]++;
				break;
			case '[':
				Counter[2]++;
				break;
			case '{':
				Counter[4]++;
				break;
			case ')':
				Counter[1]++;
				break;
			case ']':
				Counter[3]++;
				break;
			case '}':
				Counter[5]++;
				break;
		}
	}
	
	if((Counter[0]==Counter[1])&&(Counter[2]==Counter[3])&&(Counter[4]==Counter[5]))
	{
		printf("Balanced");
	}
	else
	{
		printf("Not Balanced");
	}
	
}

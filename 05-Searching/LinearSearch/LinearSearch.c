#include <stdio.h>

int Ittr = 0;
int num = 0;
const int len = 10;
int Arr[10] ={1,2,3,4,5,6,7,8,9,10};

/***********************************************************************************/
/*****************************Functions Prototype***********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: Search
* Parameters (in): int * Array, int Lenght, int num
* Parameters (out): None
* Return value: int wanted number
* Description: take an array and search for a specific numbe in it.
************************************************************************************/
int Search(int * Array, int Lenght, int num);

void main()
{
	/*scaning the number from the user*/
	printf("Please enter number you want from 1 to 10 : ");
	scanf("%d",&num);
	
	if(Search(Arr,len,num) == 0)
	{
		printf("Sorry number out of range\n");
	}
	else
	{
		printf("The number you want is element %d\n",Search(Arr,len,num));
	}
}

/***********************************************************************************/
/*****************************Functions Definition**********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: Search
* Parameters (in): int * Array, int Lenght
* Parameters (out): None
* Return value: int wanted number
* Description: take an array and search for a specific numbe in it.
************************************************************************************/
int Search(int * Array, int Lenght, int num)
{
	for(Ittr = 0; Ittr < Lenght; Ittr++)
	{
		/*Searching for the  number */
		if(Array[Ittr] == num)
		{
			return Ittr+1;	
		}
		
	}
	return 0;
}
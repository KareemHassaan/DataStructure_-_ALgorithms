/*
 ============================================================================
 Name        : Queue.c
 Author      : Kareem Hassaan
 Description : Implementation to Basic function to the Queue using array.
 ============================================================================
*/
#include<stdio.h>
#include"STD_TYPES.h"
#include"Queue.h"

uint8 Rear = 0;
sint8 Front = -1;

/***********************************************************************************/
/**************************** Functions Definition *********************************/
/***********************************************************************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: Enqueue
* Parameters (in): sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Function declaration to Enqueue an element in the Queue.
************************************************************************************/
void Enqueue(sint16 * S16Array, sint16 s16Input, uint8 Size)
{
	/*Checking if the Queue is Overflow or not*/
	if((Rear == Front-1)||((Rear == Size)&&(Front ==0)))
	{
		printf("The Queue is Overflow \n");
	}
	else
	{	/*Checking if the last element enqueued in the end of the array*/
		if(Rear == Size)
		{
			/*Returning the Rear to the begining of the array*/
			Rear = 0;
			S16Array[Rear] = s16Input;
			Rear++;
			
		}
		else
		{
			/*Checking if the Queue is empty and this is the first element enqueued or not*/
			if(Front == -1)
			{	
				Front = 0;
			}
			S16Array[Rear] = s16Input;
			Rear++;
		}
		
	}
}
/************************************************************************************
* Function Name: Dequeue
* Parameters (in): None
* Parameters (out): None
* Return value: sint16
* Description: Function declaration to Dequeue an element from the Queue.
************************************************************************************/
sint16 Dequeue(sint16 * S16Array, uint8 Size)
{
	sint16 s16Input = 0;
	
	/*Checking if the Queue is Underflow or not*/
	if((Front == -1)||(Front == Rear))
	{
		printf("The Queue is Underflow \n");
	}
	else
	{
		/*Checking if the last element Dequeued from the end of the array*/
		if(Front == Size)
		{
			/*Returning the Front to the begining of the array*/
			s16Input = S16Array[Front];
			Front = 0;
		}
		else
		{
			s16Input = S16Array[Front];
			Front++;
		}
	}
	
	
}
/************************************************************************************
* Function Name: PrintArray
* Parameters (in): uint8 Lenght, uint8 * u8Array
* Parameters (out): None
* Return value: None
* Description: Function declaration to Print an array from user.
************************************************************************************/
void PrintArray(uint8 Lenght, sint16 * u8Array)
{
	uint8 Itter;
	for(Itter = 0; Itter < Lenght;Itter++)
	{
		printf("%d \t",u8Array[Itter]);
	}
}
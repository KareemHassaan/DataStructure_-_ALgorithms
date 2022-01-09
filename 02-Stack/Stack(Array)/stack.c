/*
 ============================================================================
 Name        : Stack.c
 Author      : Kareem Hassaan
 Description : Implementation to Basic function to the Stack with array.
 ============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include"STD_TYPES.h"
#include"stack.h"



/***********************************************************************************/
/**************************** Functions Definition *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: Push
* Parameters (in): Stack * StackPtr, sint16 s16Inpute
* Parameters (out): None
* Return value: None
* Description: Function declaration to Push an element in the stack.
************************************************************************************/
void Push(Stack * StackPtr, sint16 s16Input)                 
{
	/*Checking if the stack is overflow or not*/
	if((StackPtr -> Top) == (StackPtr -> Size -1))
	{
		printf("Stack Overflow \n");
	}
	else
	{
		(StackPtr -> Top)++;
		StackPtr -> s16Array[(StackPtr -> Top)] = s16Input;
	}
	
}     

/************************************************************************************
* Function Name: Push
* Parameters (in): None
* Parameters (out): None
* Return value: sint16
* Description: Function declaration to Pop an element from the stack.
************************************************************************************/
sint16 Pop(Stack * StackPtr)                 
{
	sint16 s16Input = 0;
	
	/*Checking if there is any elements in the stack or not*/
	if(StackPtr -> Top == -1)
	{
		printf("Stack Underflow \n");
	}
	else
	{
		s16Input = StackPtr -> s16Array[(StackPtr -> Top)];
		StackPtr -> s16Array[(StackPtr -> Top)] = 0;
		(StackPtr -> Top)--;
		
		return s16Input;
	}
	
}     

/************************************************************************************
* Function Name: PrintArray
* Parameters (in): Stack * StackPtr
* Parameters (out): None
* Return value: None
* Description: Function declaration to Print an array from user.
************************************************************************************/
void PrintArray(Stack * StackPtr)
{
	uint8 Itter;
	for(Itter = 0; Itter < (StackPtr -> Size);Itter++)
	{
		printf("%d \t",StackPtr -> s16Array[Itter]);
	}
}


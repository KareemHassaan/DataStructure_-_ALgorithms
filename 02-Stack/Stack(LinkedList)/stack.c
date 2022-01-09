/*
 ============================================================================
 Name        : Stack.c
 Author      : Kareem Hassaan
 Description : Implementation to Basic functions to the Stack with Linked List.
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
* Parameters (in): sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Function declaration to Push an element in the stack.
************************************************************************************/
void Push(sint16 s16Input)                 
{
	/*Node cereation Dynamic memmory allocation*/
	Node * LastInput = (Node*)malloc(sizeof(Node)); 
	/*Storing the data from the user in the node.*/
	LastInput -> s16Data = s16Input; 
	/*Making the node to point to the Head pointed to*/
	LastInput -> NextNode = Head;  
	/*Making the head pointing on the first node*/
	Head = LastInput;
}     

/************************************************************************************
* Function Name: Push
* Parameters (in): None
* Parameters (out): None
* Return value: sint16
* Description: Function declaration to Pop an element from the stack.
************************************************************************************/
sint16 Pop()                 
{
	/*Node cereation Dynamic memmory allocation*/
	Node * LastInput = (Node*)malloc(sizeof(Node));
	/*Making the node to point on the last element pushed*/
	LastInput = Head;
	/*Declare a variable to store the Data of the last element pushed*/
	sint16 DataRet = 0;
	
	if(NULL == LastInput)
	{
		/*The head is NULL so the stack is empty*/
		printf("Stack Is Empty \n");
	}
	else
	{
		/*Storing the Data of the last element pushed*/
		DataRet = LastInput -> s16Data;
		/*Making the Head point on the next element in the stack*/
		Head = LastInput -> NextNode;
		/*Free the space of the poped element*/
		free(LastInput);
		/*Return the Data of the last element pushed*/
		return DataRet;
	}
	
}     

/************************************************************************************
* Function Name: Traverse
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Defining a function to to print the stack
************************************************************************************/ 
void Traverse()                               
{
	Node * print = Head;
	
	/*chack if the Stack is empty or not*/
	if(print == NULL)
	{
		printf("The Stack is empty\n");
		return;
	}
	
	else
	{
		printf("The stack is\t");
		
		/*Printing all element in the stack*/
		while(print != NULL)
	    {
			printf("%d\t",print->s16Data);
			print = print -> NextNode;
	    }
	    printf("\n");
	}
}  



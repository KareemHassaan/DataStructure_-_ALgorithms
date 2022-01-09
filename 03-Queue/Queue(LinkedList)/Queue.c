/*
 ============================================================================
 Name        : Queue.c
 Author      : Kareem Hassaan
 Description : Implementation to Basic function to the Queue with Linked List.
 ============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include"STD_TYPES.h"
#include"Queue.h"


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
void Enqueue(sint16 s16Input)
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
* Function Name: Dequeue
* Parameters (in): None
* Parameters (out): None
* Return value: sint16
* Description: Function declaration to Dequeue an element from the Queue.
************************************************************************************/
sint16 Dequeue()
{
	/*Node cereation Dynamic memmory allocation*/
	Node * FirstInput = (Node*)malloc(sizeof(Node));
	/*Making the node to point on the first element enqueued*/
	FirstInput = Head;
	/*Declare a variable to store the Data of the Dequeued element*/
	sint16 DataRet = 0;
	
	if(NULL == Head)
	{
		/*The head is NULL so the Queue is empty*/
		printf("Queue Is Empty \n");
	}
	else if(NULL == (Head -> NextNode))
	{
		/*Storing the Data of the last element enqueued*/
		DataRet = Head -> s16Data;
		/*Free the space of the Dequeued element*/
		free(Head);
		/*Making the Head point on NULL in the Queue*/
		Head = NULL;
		/*Return the Data of the last element enqueued*/
		return DataRet;
	}
	else
	{
		/*Searching about the last element to dequeue*/
		while((FirstInput -> NextNode) -> NextNode != NULL)
		{
			FirstInput = FirstInput -> NextNode;
		}	
		
		/*Storing the Data of the last element enqueued*/
		DataRet = (FirstInput -> NextNode) -> s16Data;
		/*Free the space of the Dequeued element*/
		free(FirstInput -> NextNode);
		/*Making the Node before last one point on NULL in the Queue*/
		FirstInput -> NextNode = NULL;
		/*Return the Data of the last element enqueued*/
		return DataRet;
	}
}
/************************************************************************************
* Function Name: Traverse
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Defining a function to to print the Queue.
************************************************************************************/ 
void Traverse()
{
	Node * print = Head;
	
	/*chack if the Queue is empty or not*/
	if(print == NULL)
	{
		printf("The Queue is empty\n");
		return;
	}
	
	else
	{
		printf("The Queue is\t");
		
		/*Printing all element in the Queue*/
		while(print != NULL)
	    {
			printf("%d\t",print->s16Data);
			print = print -> NextNode;
	    }
	    printf("\n");
	}
}
/*
 ============================================================================
 Name        : LinkedList.c
 Author      : Kareem Hassaan
 Description : Implemntation to Basic function to the Linked List.
 ============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include"STD_TYPES.h"
#include"LinkedList.h"


/***********************************************************************************/
/**************************** Functions Definition *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: InsertNodeHead
* Parameters (in): sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Function declaration to insert nodes from the begining of the list
************************************************************************************/
void InsertNodeHead(sint16 s16Input)                 
{
	/*Node cereation Dynamic memmory allocation*/
	Node * FirstNode = (Node*)malloc(sizeof(Node)); 
	/*Storing the data from the user in the node.*/
	FirstNode -> s16Data = s16Input; 
	/*Making the node to point to the null as it the end of the list*/
	FirstNode -> NextNode = Head;  
	/*Making the head pointing on the first node*/
	Head = FirstNode;
}     

/************************************************************************************
* Function Name: InsertNodeTail
* Parameters (in): sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Function declaration to insert nodes at the end of the list
************************************************************************************/
void InsertNodeTail(sint16 s16Input)                 
{
	/*Node cereation Dynamic memmory allocation*/
	Node * LastNode = (Node*)malloc(sizeof(Node));
	Node * Lastptr = (Node*)malloc(sizeof(Node));
	Lastptr = Head;
	
	if(Head == NULL)
	{
		/*Storing the data from the user in the node.*/
		LastNode -> s16Data = s16Input; 
		/*Making the node to point to the null as it the end of the list*/
		LastNode -> NextNode = NULL; 
		/*Assinging the head to the first node*/
		Head = LastNode;
	}
	else
	{
		/*Searching for the last node at the list*/
		while(Lastptr -> NextNode != NULL)
		{
			Lastptr = Lastptr -> NextNode;
		}
		
		/*Storing the data from the user in the node.*/
		LastNode -> s16Data = s16Input; 
		/*Making the node to point to the null as it the end of the list*/
		LastNode -> NextNode = NULL; 
		/*Making the last node point on the new last one*/
		Lastptr -> NextNode = LastNode;
	}
}  

/************************************************************************************
* Function Name: InsertNodeNthPosition
* Parameters (in): sint16 s16Input, uint8 Location
* Parameters (out): None
* Return value: None
* Description: Function declaration to insert nodes any position in the list
************************************************************************************/
void InsertNodeNthPosition(sint16 s16Input, uint8 Location)                 
{
	/*Node cereation Dynamic memmory allocations*/
	Node * MiddleNode = (Node*)malloc(sizeof(Node)); 
	Node * Currentptr = (Node*)malloc(sizeof(Node));
	Node * Previousptr = (Node*)malloc(sizeof(Node));
	Currentptr = Head;
	Previousptr = Head;
	uint8 NodeIndex = 0;
	
	/*Check if the location is the first node*/
	if(Location == 0)
	{
		/*Calling for Head inserting function*/
		InsertNodeHead(s16Input);
	}
	else
	{
		/*Searching about the location needed*/
		while((Currentptr != NULL) && (NodeIndex != Location))
		{
			Previousptr = Currentptr;
			Currentptr = Currentptr-> NextNode;
			NodeIndex++;
			
		}
		/*Checking if the location at the end of the list or not*/
		if((Currentptr != NULL))
		{
			/*Storing the data from the user in the node.*/
			MiddleNode -> s16Data = s16Input;
			/*Making the inserted node to point to next node after it in the list*/
			MiddleNode -> NextNode = Currentptr;
			/*Making the node before the inserted node to point it*/
			Previousptr -> NextNode = MiddleNode;
		}
		else
		{
			/*Calling for tail inserting function*/
			InsertNodeTail(s16Input);
		}
	}
}                                                

/************************************************************************************
* Function Name: DeleteNode
* Parameters (in): sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Defining a function to delete a node at nth Node in the list
************************************************************************************/
void DeleteNode(sint16 s16Input)                 
{
	/*Initialize current and previous pointers*/
	Node * Deletedptr = (Node*)malloc(sizeof(Node));    
	Node * PreviousDeletedptr = (Node*)malloc(sizeof(Node));    	
    Deletedptr = Head;
	PreviousDeletedptr = Head;

	/*chack if the list is empty or not*/
	if(Head == NULL)
	{
		printf("List is Empty \n");
	}
	
	/*check if the Data wanted to delete in the first node*/
	else if((Head -> s16Data) == s16Input)
	{
		/*Making the head pointing on the second node and delete the first one*/
		Head = Deletedptr -> NextNode;
		free(Deletedptr);
		return;
	}
	
	else if(Deletedptr != NULL)
	{
		while((Deletedptr != NULL)&&((Deletedptr -> s16Data) != s16Input))
		{
			/*Searching about the data in which node to delete it*/
			PreviousDeletedptr = Deletedptr;
			Deletedptr = Deletedptr -> NextNode;
		}
		
		if( NULL == Deletedptr)
		{
			/*Printing that the data not in the list*/
			printf("Sorry The data You Entered Not Included \n");
			
		}
		else
		{
			/*Making the previous node pointing on the node after the deleted one*/
			PreviousDeletedptr -> NextNode = Deletedptr -> NextNode;
			free(Deletedptr);
		}
	}
}                             


/************************************************************************************
* Function Name: Traverse
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Defining a function to to print the list
************************************************************************************/ 
void Traverse()                               
{
	Node * print = Head;
	
	/*chack if the list is empty or not*/
	if(print == NULL)
	{
		printf("The List is empty\n");
		return;
	}
	
	else
	{
		printf("The List is\t");
		
		while(print != NULL)
	    {
			printf("%d\t",print->s16Data);
			print = print -> NextNode;
	    }
	    printf("\n");
	}
}  

/************************************************************************************
* Function Name: search
* Parameters (in): sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Function declaration to search in the list
************************************************************************************/
void search(sint16 s16Input)
{

	/*Node cereation Dynamic memmory allocations*/
	Node * unknownNode = (Node*)malloc(sizeof(Node)); 
	unknownNode = Head;
	uint8 NodeIndex = 0;
	
	/*Check if the location is the first node*/
	if(Head -> s16Data == s16Input)
	{
		/*printing the index of the element*/
		printf("The Index of the element with value %d is 0 \n", s16Input);
	}
	else
	{
		/*Searching about the location needed*/
		while((unknownNode != NULL) && (unknownNode -> s16Data != s16Input))
		{
			unknownNode = unknownNode -> NextNode;
			NodeIndex++;
		}
		if(unknownNode != NULL)
		{
		/*printing the index of the element*/
		printf("The Index of the element with value %d is %d \n", s16Input, NodeIndex);
		}
		else
		{
			/*printing the index of the element not found*/
			printf("The Index of the element with value %d is not found \n", s16Input);
		}
	}	
}

/************************************************************************************
* Function Name: SortList
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Function declaration to sort nodes of the list
************************************************************************************/
void SortList()
{
	Node * Ptr = Head;
	Node * NestedPtr = Head;
	Node * TempPtr = NULL;
	Node * Previousptr = (Node*)malloc(sizeof(Node));
	Node * PreviousNestedPtr = (Node*)malloc(sizeof(Node)); 
	Previousptr = Head;
	PreviousNestedPtr = Head;
	
	while(Ptr != NULL)
	{
		Previousptr = Ptr;
		Ptr = Ptr -> NextNode;
		printf("HiPtr\n");
		NestedPtr = Ptr;
		
	}
		}
		
		while(NestedPtr != NULL)
		{
			printf("HiNestedPtr\n");
			if((NestedPtr -> s16Data) < (Ptr -> s16Data))
			{  
				
				Previousptr -> NextNode = NestedPtr;
				PreviousNestedPtr -> NextNode = Ptr;
				
				TempPtr = NestedPtr -> NextNode;
				NestedPtr -> NextNode = Ptr -> NextNode;
				Ptr -> NextNode = TempPtr;
				
				NestedPtr = PreviousNestedPtr -> NextNode;
				Ptr = Previousptr -> NextNode;
			}
			else
			{
				PreviousNestedPtr = NestedPtr;
				NestedPtr = NestedPtr -> NextNode;
			}
		}
		
		
	}
}

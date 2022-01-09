/*
 ============================================================================
 Name        : Queue.h
 Author      : Kareem Hassaan
 Description : Declaration to Basic function to the Queue.
 ============================================================================
*/
#ifndef Queue_H
#define Queue_H

/***********************************************************************************/
/**************************** Functions Prototype *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: Enqueue
* Parameters (in): sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Function declaration to Enqueue an element in the Queue.
************************************************************************************/
void Enqueue(sint16 s16Input);
/************************************************************************************
* Function Name: Dequeue
* Parameters (in): None
* Parameters (out): None
* Return value: sint16
* Description: Function declaration to Dequeue an element from the Queue.
************************************************************************************/
sint16 Dequeue();
/************************************************************************************
* Function Name: Traverse
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Defining a function to to print the Queue.
************************************************************************************/ 
void Traverse();

/*Generating a node by structure*/
typedef struct node                         
{
    sint16  s16Data;
    struct node * NextNode;
}Node;

/*The head of the list , Global variable.*/
Node * Head = NULL; 

#endif /* Queue_H */
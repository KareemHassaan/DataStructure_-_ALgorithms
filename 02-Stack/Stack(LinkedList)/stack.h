/*
 ============================================================================
 Name        : Stack.h
 Author      : Kareem Hassaan
 Description : Declaration to Basic functions to the Stack.
 ============================================================================
*/
#ifndef Stack_H
#define Stack_H

/***********************************************************************************/
/**************************** Functions Prototype *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: Push
* Parameters (in): sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Function declaration to Push an element in the stack.
************************************************************************************/
void Push(sint16 s16Input);
/************************************************************************************
* Function Name: Push
* Parameters (in): None
* Parameters (out): None
* Return value: sint16
* Description: Function declaration to Pop an element from the stack.
************************************************************************************/
sint16 Pop();
/************************************************************************************
* Function Name: Traverse
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Defining a function to to print the stack
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

#endif /* Stack_H */
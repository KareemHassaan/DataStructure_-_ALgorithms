/*
 ============================================================================
 Name        : Stack.h
 Author      : Kareem Hassaan
 Description : Declaration to Basic function to the Stack.
 ============================================================================
*/
#ifndef Stack_H
#define Stack_H

#define SIZE 5

/*Generating a Stack by structure*/
typedef struct                          
{
    sint16  s16Array[SIZE];
	uint8   Size;
    sint8   Top;
}Stack;




/***********************************************************************************/
/**************************** Functions Prototype *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: Push
* Parameters (in): Stack * StackPtr, sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Function declaration to Push an element in the stack.
************************************************************************************/
void Push(Stack * StackPtr, sint16 s16Input);
/************************************************************************************
* Function Name: Pop
* Parameters (in): Stack * StackPtr
* Parameters (out): None
* Return value: sint16
* Description: Function declaration to Pop an element from the stack.
************************************************************************************/
sint16 Pop(Stack * StackPtr);
/************************************************************************************
* Function Name: PrintArray
* Parameters (in): Stack * StackPtr
* Parameters (out): None
* Return value: None
* Description: Function declaration to Print an array from user.
************************************************************************************/
void PrintArray(Stack * StackPtr);




#endif /* Stack_H */
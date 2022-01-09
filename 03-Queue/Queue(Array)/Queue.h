/*
 ============================================================================
 Name        : Queue.h
 Author      : Kareem Hassaan
 Description : Declaration to Basic function to the Queue.
 ============================================================================
*/
#ifndef Queue_H
#define Queue_H

#define SIZE 5
/***********************************************************************************/
/**************************** Functions Prototype *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: Enqueue
* Parameters (in): sint16 * S16Array, sint16 s16Input, uint8 Size
* Parameters (out): None
* Return value: None
* Description: Function declaration to Enqueue an element in the Queue.
************************************************************************************/
void Enqueue(sint16 * S16Array, sint16 s16Input, uint8 Size);
/************************************************************************************
* Function Name: Dequeue
* Parameters (in): None
* Parameters (out): None
* Return value: sint16
* Description: Function declaration to Dequeue an element from the Queue.
************************************************************************************/
sint16 Dequeue(sint16 * S16Array, uint8 Size);
/************************************************************************************
* Function Name: PrintArray
* Parameters (in): uint8 Lenght, uint8 * u8Array
* Parameters (out): None
* Return value: None
* Description: Function declaration to Print an array from user.
************************************************************************************/
void PrintArray(uint8 Lenght, sint16 * u8Array);

#endif /* Queue_H */
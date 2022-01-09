/*
 ============================================================================
 Name        : LinkedList.h
 Author      : Kareem Hassaan
 Description : Declaration to Basic function to the Linked List.
 ============================================================================
*/
#ifndef Linked_List_H
#define Linked_List_H

/***********************************************************************************/
/**************************** Functions Prototype *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: InsertNode
* Parameters (in): sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Function declaration to insert nodes from the begining of the list
************************************************************************************/
void InsertNodeHead(sint16 s16Input); 
/************************************************************************************
* Function Name: InsertNodeTail
* Parameters (in): sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Function declaration to insert nodes at the end of the list
************************************************************************************/
void InsertNodeTail(sint16 s16Input);
/************************************************************************************
* Function Name: InsertNodeNthPosition
* Parameters (in): sint16 s16Input, uint8 Location
* Parameters (out): None
* Return value: None
* Description: Function declaration to insert nodes any position in the list
************************************************************************************/
void InsertNodeNthPosition(sint16 s16Input, uint8 Location);
/************************************************************************************
* Function Name: DeleteNode
* Parameters (in): sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Defining a function to delete a node at nth Node in the list
************************************************************************************/
void DeleteNode(sint16 s16Input); 
/************************************************************************************
* Function Name: Traverse
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Defining a function to to print the list
************************************************************************************/ 
void Traverse();
/************************************************************************************
* Function Name: search
* Parameters (in): sint16 s16Input
* Parameters (out): None
* Return value: None
* Description: Function declaration to search in the list
************************************************************************************/
void search(sint16 s16Input);
/************************************************************************************
* Function Name: SortList
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Function declaration to sort nodes of the list
************************************************************************************/
void SortList();



/*Generating a node by structure*/
typedef struct node                         
{
    sint16  s16Data;
    struct node * NextNode;
}Node;

/*The head of the list , Global variable.*/
Node * Head = NULL; 

#endif /* Linked_List_H */
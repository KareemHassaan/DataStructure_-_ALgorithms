/*
 ============================================================================
 Name        : JumpSearch.h
 Author      : Kareem Hassaan
 Description : Declaration to Basic function to the JumpSearch.
 ============================================================================
*/
#ifndef JumpSearch_H
#define JumpSearch_H

/***********************************************************************************/
/**************************** Functions Prototype *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: JumpSearch
* Parameters (in): uint8 Lenght, uint8 * u8Array, uint8 WantedData
* Parameters (out): None
* Return value: sint8 WantedIndex
* Description: Function declaration to Scan an array from user.
************************************************************************************/
sint8 JumpSearch(uint8 Lenght, uint8 * u8Array, uint8 WantedData);

#endif /* JumpSearch_H */
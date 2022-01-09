/*
 ============================================================================
 Name        : BinarySearch.h
 Author      : Kareem Hassaan
 Description : Declaration to Basic function to the BinarySearch.
 ============================================================================
*/
#ifndef BinarySearch_H
#define BinarySearch_H

/***********************************************************************************/
/**************************** Functions Prototype *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: BinarySearch
* Parameters (in): uint8 Lenght, uint8 * u8Array, uint8 WantedData
* Parameters (out): None
* Return value: sint8 WantedIndex
* Description: Function declaration to Scan an array from user.
************************************************************************************/
sint8 * BinarySearch(uint8 Lenght, uint8 * u8Array, uint8 WantedData);

#endif /* BinarySearch_H */
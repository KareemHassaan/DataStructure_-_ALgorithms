/*
 ============================================================================
 Name        : SelectionSort.h
 Author      : Kareem Hassaan
 Description : Declaration to Basic function to the SelectionSort.
 ============================================================================
*/
#ifndef SelectionSort_H
#define SelectionSort_H
#define SIZE 5
/***********************************************************************************/
/**************************** Functions Prototype *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: SelectionSort
* Parameters (in): uint8 * u8Array
* Parameters (out): None
* Return value: None
* Description: Function declaration to Sort an array.
************************************************************************************/
void SelectionSort(uint8 * u8Array, uint8 Lenght);
/************************************************************************************
* Function Name: Swap
* Parameters (in): uint8 * Num1, uint8 * Num2
* Parameters (out): None
* Return value: None
* Description: Function declaration to Swap two numbers.
************************************************************************************/
void Swap(uint8 * Num1, uint8 * Num2);
/************************************************************************************
* Function Name: ScanArray
* Parameters (in): uint8 Num1, uint8 Num2
* Parameters (out): None
* Return value: None
* Description: Function declaration to Swap two numbers.
************************************************************************************/
void ScanArray(uint8 Lenght, uint8 * u8Array);
/************************************************************************************
* Function Name: PrintArray
* Parameters (in): uint8 Lenght, uint8 * u8Array
* Parameters (out): None
* Return value: None
* Description: Function declaration to Print an array from user.
************************************************************************************/
void PrintArray(uint8 Lenght, uint8 * u8Array);
/************************************************************************************
* Function Name: ScanArray
* Parameters (in): uint8 Lenght, uint8 * u8Array
* Parameters (out): None
* Return value: None
* Description: Function declaration to Scan an array from user.
************************************************************************************/
void ScanArray(uint8 Lenght, uint8 * u8Array);

#endif /* SelectionSort_H */
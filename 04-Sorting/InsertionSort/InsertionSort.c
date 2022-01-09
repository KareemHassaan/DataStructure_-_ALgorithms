/*
============================================================================
 Name        : InsertionSort.c
 Author      : Kareem Hassaan
 Description : Implementation to Basic function to sort the Array.
 ============================================================================
*/
#include<stdio.h>
#include"STD_TYPES.h"
#include"InsertionSort.h"

uint8 Itter = 0;
uint8 NestedItter = 0;


/***********************************************************************************/
/**************************** Functions Definition *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: ScanArray
* Parameters (in): uint8 Lenght, uint8 * u8Array
* Parameters (out): None
* Return value: None
* Description: Function declaration to Scan an array from user.
************************************************************************************/
void ScanArray(uint8 Lenght, uint8 * u8Array)
{
	for(Itter = 0; Itter < Lenght;Itter++)
	{
		printf("Please enter number %d : ",Itter);
		scanf("%d",&u8Array[Itter]);
	}
}

/************************************************************************************
* Function Name: PrintArray
* Parameters (in): uint8 Lenght, uint8 * u8Array
* Parameters (out): None
* Return value: None
* Description: Function declaration to Print an array from user.
************************************************************************************/
void PrintArray(uint8 Lenght, uint8 * u8Array)
{
	for(Itter = 0; Itter < Lenght;Itter++)
	{
		printf("%d \t",u8Array[Itter]);
	}
}

/************************************************************************************
* Function Name: Swap
* Parameters (in): uint8 Num1, uint8 Num2
* Parameters (out): None
* Return value: None
* Description: Function declaration to Swap two numbers.
************************************************************************************/
void Swap(uint8 * Num1, uint8 * Num2)
{
	uint8 SwapTemp = 0;
	
	SwapTemp = *Num1;
	*Num1 = *Num2;
	*Num2 = SwapTemp;
}

/************************************************************************************
* Function Name: InsertionSort
* Parameters (in): uint8 * u8Array
* Parameters (out): None
* Return value: None
* Description: Function declaration to Sort an array .
************************************************************************************/
void InsertionSort(uint8 * u8Array, uint8 Lenght)
{
	uint8 Min = 0;
	
	for(Itter = 0;Itter < Lenght-1; Itter++ )
	{
		for(NestedItter = Itter+1;NestedItter < Lenght ; NestedItter++ )
		{
			if(u8Array[Itter] > u8Array[NestedItter])
			{
				Swap(&u8Array[Itter], &u8Array[NestedItter]);
			}
		}
	}
}
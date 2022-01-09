/*
============================================================================
 Name        : SelectionSort.c
 Author      : Kareem Hassaan
 Description : Implementation to Basic function to sort the Array.
 ============================================================================
*/
#include<stdio.h>
#include"STD_TYPES.h"
#include"SelectionSort.h"

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
	
	/*Swapping two numbers*/
	SwapTemp = *Num1;
	*Num1 = *Num2;
	*Num2 = SwapTemp;
}

/************************************************************************************
* Function Name: SelectionSort
* Parameters (in): uint8 * u8Array
* Parameters (out): None
* Return value: None
* Description: Function declaration to Sort an array .
************************************************************************************/
void SelectionSort(uint8 * u8Array, uint8 Lenght)
{
	uint8 Min = 0;
	
	for(Itter = 0;Itter < Lenght-1; Itter++ )
	{
		Min = Itter;
		
		for(NestedItter = Itter+1;NestedItter < Lenght ; NestedItter++ )
		{
			/*Getting the minimum value in that itteration*/
			if(u8Array[Min] > u8Array[NestedItter])
			{
				Min = NestedItter;
			}
		}
		
		/*Getting the minimum value in that itteration in the right place */
		Swap(&u8Array[Min], &u8Array[Itter]);
	}
}
/*
============================================================================
 Name        : JumpSearch.c
 Author      : Kareem Hassaan
 Description : Implementation to Basic function to Jump search in the Array.
 ============================================================================
*/
#include<stdio.h>
#include"STD_TYPES.h"
#include"JumpSearch.h"
#include<math.h>

uint8 Ittr = 0;

/***********************************************************************************/
/**************************** Functions Definition *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: JumpSearch
* Parameters (in): uint8 Lenght, uint8 * u8Array, uint8 WantedData
* Parameters (out): None
* Return value: sint8 WantedIndex
* Description: Function declaration to Scan an array from user.
************************************************************************************/
sint8 JumpSearch(uint8 Lenght, uint8 * u8Array, uint8 WantedData)
{
	uint8 Start = 0;
	/*Calculating the step of the sub array*/
	uint8 End   = sqrt(Lenght);
	
	/*Searching which sub array that including the element needed*/
	while((u8Array[End] <= WantedData) && (End < Lenght))
	{
		Start = End;
		End += sqrt(Lenght);
		
		/*If the last step exceeds the end of the array it will return end to be equal last element*/
		if(End > Lenght-1)
		{
			End = Lenght;
		}
	}
	
	/*Linear search to get the element from the sub array found in*/
	for(Ittr = Start; Ittr < End; Ittr++)
	{
		if(u8Array[Ittr] == WantedData)
		{
			return Ittr;
		}
	}
	/*Return the index -1 means that it doesnot exist*/
	return -1;
}










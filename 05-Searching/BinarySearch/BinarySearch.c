/*
============================================================================
 Name        : BinarySearch.c
 Author      : Kareem Hassaan
 Description : Implementation to Basic function to Binary search in the Array.
 ============================================================================
*/
#include<stdio.h>
#include"STD_TYPES.h"
#include"BinarySearch.h"

sint8 WantedIndex[3] = {};

/***********************************************************************************/
/**************************** Functions Definition *********************************/
/***********************************************************************************/
/************************************************************************************
* Function Name: BinarySearch
* Parameters (in): uint8 Lenght, uint8 * u8Array, uint8 WantedData
* Parameters (out): None
* Return value: sint8 WantedIndex
* Description: Function declaration to Scan an array from user.
************************************************************************************/
sint8 * BinarySearch(uint8 Lenght, uint8 * u8Array, uint8 WantedData)
{
	uint8 Start = 0;
	uint8 End   = Lenght - 1;
	uint8 Mid   = 0;
	
	while(Start <= End)
	{
		/*Calculate the middle element of the new array*/
		Mid = (Start+End)/2;
		
		if(u8Array[Mid] == WantedData)
		{
			WantedIndex[0] = Mid;
			
			/*Handling if the number needed is duplicate and count how many it duplicated*/
			while(u8Array[Mid] == u8Array[Mid+1])
			{
				/*count how many it duplicated in the right way*/
				WantedIndex[1]++;
				Mid++;
			}
			
			Mid = WantedIndex[0];
			
			while(u8Array[Mid] == u8Array[Mid-1])
			{
				/*count how many it duplicated in the Left way*/
				WantedIndex[2]++;
				Mid--;
			}
			
			return WantedIndex;
		}
		
		/*The element wanted in the right half of the array*/
		if(u8Array[Mid] > WantedData)
		{
			End = Mid-1;
		}
		
		/*The element wanted in the Left half of the array*/
		if(u8Array[Mid] < WantedData)
		{
			Start = Mid+1;
		}
	}
	/*Return the index -1 mean that the element doesnot exist*/
	WantedIndex[0] = -1;
	return WantedIndex;
}










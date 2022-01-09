#include<stdio.h>
#include"STD_TYPES.h"
#include"InsertionSort.h"

uint8 UnsortedArray[SIZE] = {};
void main(void)
{
	ScanArray(SIZE, UnsortedArray);
	
	InsertionSort(UnsortedArray, SIZE);
	
	printf("The sorted Array : \n");
	
	PrintArray(SIZE, UnsortedArray);
}
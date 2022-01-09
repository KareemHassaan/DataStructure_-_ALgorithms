#include<stdio.h>
#include"STD_TYPES.h"
#include"SelectionSort.h"

uint8 UnsortedArray[SIZE] = {};
void main(void)
{
	ScanArray(SIZE, UnsortedArray);
	
	SelectionSort(UnsortedArray, SIZE);
	
	printf("The sorted Array : \n");
	
	PrintArray(SIZE, UnsortedArray);
}
#include<stdio.h>
#include"STD_TYPES.h"
#include"BubbleSort.h"

uint8 UnsortedArray[SIZE] = {};
void main(void)
{
	ScanArray(SIZE, UnsortedArray);
	
	BubbleSort(UnsortedArray, SIZE);
	
	printf("The sorted Array : \n");
	
	PrintArray(SIZE, UnsortedArray);
}
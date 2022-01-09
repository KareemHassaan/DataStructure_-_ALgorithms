#include<stdio.h>
#include"STD_TYPES.h"
#include"BubbleSort.h"
#include"JumpSearch.h"
sint8 Index;
uint8 UnsortedArray[SIZE] = {4,2,1,3,0,5,6,6,9,8};

void main(void)
{
	
	BubbleSort(UnsortedArray, SIZE);
	
	printf("The sorted Array : \n");
	
	PrintArray(SIZE, UnsortedArray);
	
	Index = JumpSearch(SIZE, UnsortedArray, 7);
	
printf("The index wanted = %d",Index);
}
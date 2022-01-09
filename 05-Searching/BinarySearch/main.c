#include<stdio.h>
#include"STD_TYPES.h"
#include"BubbleSort.h"
#include"BinarySearch.h"
sint8 *Index;
uint8 UnsortedArray[SIZE] = {2,2,2,2,2,2};

void main(void)
{
	
	BubbleSort(UnsortedArray, SIZE);
	
	printf("The sorted Array : \n");
	
	PrintArray(SIZE, UnsortedArray);
	
	Index = BinarySearch(SIZE, UnsortedArray, 2);
	
	printf("The index wanted = %d , rigth %d and left %d",Index[0],Index[1],Index[2]);
}
#include<stdio.h>
#include"STD_TYPES.h"
#include"Queue.h"

sint16 QArray[SIZE] = {};

void main (void)
{
	
	Enqueue(QArray, 1,SIZE);
	Enqueue(QArray, 2,SIZE);
	Enqueue(QArray, 3,SIZE);
	Enqueue(QArray, 4,SIZE);
	Enqueue(QArray, 5,SIZE);
	
	
	Dequeue(QArray,SIZE);
	Dequeue(QArray,SIZE);
	Dequeue(QArray,SIZE);
	Dequeue(QArray,SIZE);
	Dequeue(QArray,SIZE);
	
	Enqueue(QArray, 6,SIZE);
	Enqueue(QArray, 7,SIZE);
	Enqueue(QArray, 8,SIZE);
	
	PrintArray(SIZE,QArray);
}
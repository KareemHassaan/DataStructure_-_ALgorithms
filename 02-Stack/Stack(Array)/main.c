#include<stdio.h>
#include"STD_TYPES.h"
#include"stack.h"

Stack Stack_1 = {{},SIZE,-1};
Stack * Stack_1_Ptr = &Stack_1;


void main(void)
{
	Pop(Stack_1_Ptr);
	
	Push(Stack_1_Ptr, 1);
	Push(Stack_1_Ptr, 2);
	Push(Stack_1_Ptr, 3);
	Push(Stack_1_Ptr, 4);
	Push(Stack_1_Ptr, 5);
	Push(Stack_1_Ptr, 5);
	
	Pop(Stack_1_Ptr);
	Pop(Stack_1_Ptr);
	Pop(Stack_1_Ptr);
	
	Push(Stack_1_Ptr, 6);
	Push(Stack_1_Ptr, 7);
	Push(Stack_1_Ptr, 8);
	
	PrintArray(Stack_1_Ptr);
}

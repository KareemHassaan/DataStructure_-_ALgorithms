#include<stdio.h>
#include"STD_TYPES.h"
#include"stack.h"

sint8 Ittr;
uint8 NestedIttr;

uint8 BracketsArray[SIZE] = {"([)]]{[}"};
uint8 EmptyArray = 0;

Stack Stack_1 = {{},SIZE,-1};
Stack * Stack_1_Ptr = &Stack_1;


void main(void)
{
	for(Ittr = 0;Ittr < SIZE; Ittr++)
	{
		if(('[' == BracketsArray[Ittr]) || ('(' == BracketsArray[Ittr]) || ('{' == BracketsArray[Ittr]))
		{
			/*Push in the stack the open Brackets*/
			Push(Stack_1_Ptr, BracketsArray[Ittr]);
		}
		else if((']' == BracketsArray[Ittr]) || (')' == BracketsArray[Ittr]) || ('}' == BracketsArray[Ittr]))
		{
			/*Count The Close Brackets To check if they equal to the opens or not*/
			EmptyArray++;
		}
	}
	
	for(Ittr = (Stack_1_Ptr->Top); Ittr >= 0; Ittr--)
	{
		for(NestedIttr = 0;NestedIttr < SIZE; NestedIttr++)
		{
				/*Searching for each open bracket in the stack its couple closed one in the array*/
				switch(TopValue(Stack_1_Ptr))
				{
					case '[':
						if(']' == BracketsArray[NestedIttr])
						{
							/*Pop from the stack when its couple closed one found*/
							Pop(Stack_1_Ptr);
							/*Decrement the number of the single closed brackets*/
							EmptyArray--;
						}
						break;
						
					case '(':
						if(')' == BracketsArray[NestedIttr])
						{	
							/*Pop from the stack when its couple closed one found*/
							Pop(Stack_1_Ptr);
							/*Decrement the number of the single closed brackets*/
							EmptyArray--;
						}
						break;
						
					case '{':
						if('}' == BracketsArray[NestedIttr])
						{
							/*Pop from the stack when its couple closed one found*/
							Pop(Stack_1_Ptr);
							/*Decrement the number of the single closed brackets*/
							EmptyArray--;
						}
						break;
				}
			
		}
	}
	
	/*Print if the array is Balanced or not*/
	if((IsEmpty(Stack_1_Ptr)) && (0 == EmptyArray))
	{
		printf("The Text Is Balanced");
	}
	else
	{
		printf("The Text Is Not Balanced");
	}	
}

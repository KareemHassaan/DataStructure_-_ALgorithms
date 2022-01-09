/************************************************************************************
* Function Name: SortList
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Function declaration to sort nodes of the list
************************************************************************************/
void SortList()
{
	Node * Ptr = Head;
	Node * NestedPtr = Head;
	Node * Previousptr = (Node*)malloc(sizeof(Node));
	Node * PreviousNestedPtr = (Node*)malloc(sizeof(Node)); 
	Previousptr = Head;
	PreviousNestedPtr = Head;
	
	while(Ptr != NULL)
	{
		while(NestedPtr != NULL)
		{
			NestedPtr = Ptr;
			if((NestedPtr -> s16Data) < (Ptr -> s16Data))
			{  
				printf("AAA");
		
				PreviousNestedPtr = NestedPtr -> NextNode;
				NestedPtr -> NextNode = Ptr;
				Previousptr -> NextNode = NestedPtr;
			}
			else
			{
				PreviousNestedPtr = NestedPtr;
				NestedPtr = NestedPtr -> NextNode;
			}
		}
		
		Previousptr = Ptr;
		Ptr = Ptr -> NextNode;
	}
}
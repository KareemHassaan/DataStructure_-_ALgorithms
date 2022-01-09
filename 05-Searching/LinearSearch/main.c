#include<stdio.h>

typedef struct
{
	int ID;
	int Grade;
	
}Class;


Class Array[10] = {{12,70},{14,68},{16,88},{25,55},{10,43},{19,98},{17,66},{20,68},{22,72},{28,100}};

void main(void)
{
	int HightestGrade = 0;
	int HightestGradeID = 0;
	
	for(int i =0; i<10; i++)
	{
		if(Array[i].Grade>HightestGrade)
		{
			HightestGrade = Array[i].Grade;
			HightestGradeID = Array[i].ID;
		}
	}
	
	printf("The Hightest Grade is %d of ID = %d \n",HightestGrade,HightestGradeID);
}




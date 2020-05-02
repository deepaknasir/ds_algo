/*
 * Here, we are writing a bubble sort program.
 *	- Bubble sort is stable
 *	- Bubble sort is adaptive
 *	- Bubble sort max complexity is O(n2)
 *	- Bubble sort min complexity is O(n) if array is already sorted.
 *	
 *	- In Bubble sort we can get largest element of the array in 1st pass.
 *		if we want 2 lagrest element than we can go for 2nd pass.
 *		if we want Kth largest element than we can go for Kth pass.
 */


#include <stdio.h>

int main()
{
	int arr[]={1,-5,6,8,9};
	int i, j, flag,temp;
	int num_of_ele;
	
	num_of_ele = sizeof(arr)/sizeof(arr[0]);
	
	printf("----------- Before sorting ----------\n\n");
	for (i=0; i< num_of_ele; i++)
		printf(" %d ",arr[i]);
	printf("\n");
	
	for (i=0; i < num_of_ele-1; i++)
	{
		printf("pass  %d \n",i);
		flag = 0;
		for (j=0; j<num_of_ele-1-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
				flag = 1;
			}
		}
		
		if (flag == 1)
			continue;	
		else
			break;

	}
	printf("----------- After sorting ----------\n\n");
 
	for (i=0; i< num_of_ele; i++)
		printf(" %d ",arr[i]);
	printf("\n");
	return 0;
}

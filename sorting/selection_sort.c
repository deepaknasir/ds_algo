/*
 * Here, we are writing a selection sort program.
 *	- Selection sort is not stable(it is does not presever the order)
 *	- Selection sort is not adaptive
 *	- Selection sort max complexity is O(n2)
 *	
 *	- In Bubble sort we can get smallest element of the array in 1st pass.
 *		if we want 2 smallest element than we can go for 2nd pass.
 *		if we want Kth smallest element than we can go for Kth pass.
 */


#include <stdio.h>

int main()
{
	int arr[]={1,-5,6,8,9};
	int i, j,k,temp;
	int num_of_ele;
	
	num_of_ele = sizeof(arr)/sizeof(arr[0]);
	
	printf("----------- Before sorting ----------\n\n");
	for (i=0; i< num_of_ele; i++)
		printf(" %d ",arr[i]);
	printf("\n");
	
	for (i=0; i < num_of_ele-1; i++)
	{
		printf("pass  %d \n",i);
		for (j=k=i; j<num_of_ele; j++)
		{
			if (arr[j] < arr[k])
			{
				k=j;
			}
		}
		temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;
				

	}
	printf("----------- After sorting ----------\n\n");
 
	for (i=0; i< num_of_ele; i++)
		printf(" %d ",arr[i]);
	printf("\n");
	return 0;
}

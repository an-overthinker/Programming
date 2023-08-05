//Date: 21.12.2021
//Bubble sort
#include<stdio.h>
int main()
{
	int size, i=0, j=0, temp=0,c=0,d=0;
	printf("Enter the size of the array: "); scanf("%d", &size);
	int arr[size];
	for(i=0;i<size;i++)  //input of array
	{
		printf("Enter element %d: ",(i+1));
		scanf("%d",&arr[i]);
	}
	printf("\nThe unsorted array is:-\n");
	for(i=0;i<size;i++)  //display of unsorted array
	{
		printf("%d ",arr[i]);
	}
	//swapping
	for(i=0;i<(size-1);i++)  //no. of passes=(total no. of elements - 1)
	{
		c++;
		for(j=0;j<(size-i-1);j++)  //no. of comparisons=(total no. of elements - i - 1)
	    {
	    	d++;
	    	if(arr[j]<arr[j+1])
		    {
			    temp=arr[j];
			    arr[j]=arr[j+1];
			    arr[j+1]=temp;
		    }
		}
	}
	printf("\nThe sorted array in descending order is:-\n");
	for(i=0;i<=(size-1);i++)  //display of sorted array
	{
		printf("%d ",arr[i]);
	}
	printf("\nc=%d d=%d");
	return 0;
}

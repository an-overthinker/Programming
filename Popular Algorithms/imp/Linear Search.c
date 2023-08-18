//Linear search
#include<stdio.h>
int main()
{
	int i,size,key,arr[100];
	printf("Enter the size of the array: "); scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter element %d: ",i+1);scanf("%d",&arr[i]);
	}
	printf("\nThe array is:-\n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n\nEnter the key value: ");
	scanf("%d",&key);
	for(i=0;i<size;i++)
	{
		if(key==arr[i])
			break;
	}
	if(i<size)
	    printf("The key value %d is found at position: %d.",key,i+1);
	else
	    printf("The key value %d is not found.",key);
	return 0;
}

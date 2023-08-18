//Insertion sort
#include<stdio.h>
int main()
{
	int a[100],i,j,N,temp,p;
	printf("Enter the size of the array: ");
	scanf("%d",&N);
	for(i=0;i<N;i++)  //input of array
	{
		printf("Enter element %d: ",(i+1));
		scanf("%d",&a[i]);
	}
	printf("\nThe array before sorting is:-\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	for(i=1;i<N;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]<temp)
		{
			a[j+1]=a[j];
			--j;
		}
		a[j+1]=temp;
	}
	printf("\nThe sorted array in descending order is:-\n");
    for(i=0;i<N;i++)
		printf("%d ",a[i]);
	return 0;
}

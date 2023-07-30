#include<stdio.h>
#include<stdlib.h>
int a[30],N;
void merge(int low, int mid, int high)
{
	int i=low,j=mid+1,k=low, b[20];
	while((i<=mid)&&(j<=high))
	{
		if(a[i]<a[j])
	        b[k++]=a[i++];
	    else
	        b[k++]=a[j++];
	}
	while(i<=mid)
		b[k++]=a[i++];
	while(j<=high)
	    b[k++]=a[j++];
	for(k=low;k<=high;k++)
	    a[k]=b[k];
}
void merge_sort(int low, int high)
{
	int mid,i;
	if(low<high)
	{
		mid=(low+high)/2;
		merge_sort(low,mid);
		merge_sort(mid+1,high);
		merge(low,mid,high);
	}
}
void main()
{
	int i;
	printf("\nEnter the size of the array: ");
    scanf("%d",&N);
    printf("Enter elements in array:\n");
    for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("\nThe array before sorting is:\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	merge_sort(0,N-1);
	printf("\nThe sorted array after merge sort is:\n");
	for(i=0;i<=(N-1);i++)
		printf("%d ",a[i]);
}

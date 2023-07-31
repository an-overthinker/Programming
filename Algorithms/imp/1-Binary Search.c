#include<stdio.h>
#include<stdlib.h>
int a[30],N;
int binary_search(int low,int high,int key)
{
	int mid;
	if(low>high)
	    return -1;
	mid=(low+high)/2;
	if(a[mid]==key)
		return mid;
	else if(a[mid]>key)
		binary_search(low,mid-1,key);
	else
		binary_search(mid+1,high,key);
}
void main()
{
	int i,key,x;
	printf("\nEnter the size of the array: ");
    scanf("%d",&N);
    printf("Enter elements in array:\n");
    for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("\nEnter the key value to be searched for: ");
	scanf("%d",&key);
	x=binary_search(0,N-1,key);
	if(x==-1)
	    printf("Key value %d dosen't exists in array.",key);
	else
	    printf("Key value %d is found at position: %d",key,x+1);
}

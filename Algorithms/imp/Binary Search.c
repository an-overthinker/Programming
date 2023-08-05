//Binary Search {can only be performed on a sorted array}
#include<stdio.h>
int main(){
	int a[100],i,N,l,u,mid,key;
	printf("Enter the no. of values in the array:");
	scanf("%d",&N);
	for(i=0;i<N;i++)  //input of array
	{
		printf("Enter element %d: ",(i+1));
		scanf("%d",&a[i]);
	}
	printf("\nThe array is:-\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n\nEnter the key value to be searched for: ");
	scanf("%d",&key);	
	l=0;
	u=N-1;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(a[mid]==key)
		    break;
		else if(a[mid]>key)
		    u=mid-1;
		else
		    l=mid+1;
	}
	if(l>u)
	    printf("Key value %d dosen't exists in array.",key);
	else
	    printf("Key value %d is found at position: %d.",key,mid+1);
	return 0;
}

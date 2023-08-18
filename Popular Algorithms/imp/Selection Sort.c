//Selection sort
#include<stdio.h>
int main(){
	int a[100],N,i,j,max_pos,temp;
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
	for(i=0;i<N-1;i++)
	{
		max_pos=i;
		for(j=i+1;j<N;j++)
		{
			if(a[j]>a[max_pos])
				max_pos=j;
		}
		if(max_pos!=i)
		{
			temp=a[i];
			a[i]=a[max_pos];
			a[max_pos]=temp;
		}
	}
	printf("\nThe sorted array in descending order is:-\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	return 0;
}

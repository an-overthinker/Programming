#define MAX 10
#include<math.h>
#include<stdio.h>
int isPrime(int n)
{
	int i;
	if(n<2)
	    return 0;
	else if(n==2 || n==3)
		return 1;
	else
	{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			    return 0;
		}
		return 1;
	}	
}
int isWithin(int n)
{
	if(n>=0 && n<=MAX-1)
		return 1;
	return 0;
}
int main()
{
	int key,hash[MAX],i,j,k,prime;
	for(i=0;i<MAX;i++)
	    hash[i]=-999;
	do{
		printf("Enter the prime number within 0 and %d: ",MAX-1);
		scanf("%d",&prime);
	}while(isPrime(prime) && isWithin(prime));
	i=0;
	do
	{
		printf("Enter key value: ");
		scanf("%d",&key);
		j=key%prime;
		if(hash[j]==-999)
		{
			hash[j]=key;
			printf("Allocation succesfull in proper space.\n");
		}
	    else
	    {
	    	j=j+1;
	    	while(hash[j]!=-999)
	    	    j++;
	    	hash[j]=key;
	    	printf("Allocation succesfull after collision resolution.\n");
		}
		i++;
	}while(key!=-1 && i<MAX);
	printf("\nThe hash table is\n");
	printf("Format: key[index]\n");
	for(i=0;i<MAX;i++)
	    printf("%d[%d]\t",hash[i],i);
}

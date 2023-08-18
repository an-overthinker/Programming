//ARRAY OPERATIONS
#include<stdio.h>
#include<stdlib.h>
void insert();
void del();
void replace();
void search();
void display();
int arr[30],n;
void main()
{
	int i,c1=0;
	char ch;
	printf("Enter no. of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the elements in the array:-\n");
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	while(1)
	{
		printf("\nUSER'S CHOICE:-\nEnter a to insert an element\nEnter b to delete an element\nEnter c to replace an element\nEnter d to search for an element\nEnter e to display the array\nEnter anything else to exit the program");
	    printf("\nEnter your choice: ");
    	scanf(" %c",&ch);
    	switch(ch)
    	{
	    	case 'a':insert();
		         break;
		    case 'b':del();
				 break;
		    case 'c':replace();
		         break;
		    case 'd':search();
		         break;
	    	case 'e':display();
		         break;
	     	default:
		        exit(0);
         }
	}
}
void insert()  //case a
{
	int u,i,k;
	printf("\nUSER'S CHOICE\nEnter 1 to insert element at beginning\nEnter 2 to insert element at end\nEnter 3 to insert element at any other position\nEnter anything else to exit the program");
	printf("\nEnter your choice: ");
	scanf("%d",&u);
	switch(u)
	{
		case 1:
		        for(i=n;i>=0;i--)
			        arr[i]=arr[i-1];
			    printf("Enter the element:");
			    scanf("%d",&arr[0]);
			    n++;
			    break;
	    case 2:
	    		printf("Enter the element:");
			    scanf("%d",&arr[n]);
		    	n++;
		    	break;
	    case 3:
	            printf("Enter the index at which you want to insert: ");
			    scanf("%d",&k);
			    for(i=n;i>k;i--)
			        arr[i]=arr[i-1];
		    	printf("Enter the element:");
		        scanf("%d",&arr[k]);
		        n++;
		    	break;
	    default:
		         exit(0);
	}
	
}
void del()  //case b
{
	int u,i,k;
	printf("\nEnter 1 to delete element from beginning\nEnter 2 to delete element from end\nEnter 3 to delete element from any other position\nEnter anything else to exit the program");
	printf("\nEnter your choice: ");
	scanf("%d",&u);
	switch(u)
	{
		case 1:
				n--;
				for(i=0;i<n;i++)
		    		arr[i]=arr[i+1];
				break;
		case 2:
				n--;
				break;
		case 3:
				n--;
				printf("Enter the index of element to be deleted: ");
				scanf("%d",&k);
				for(i=k;i<n;i++)
				    arr[i]=arr[i+1];
				break;
		default:
		         exit(0);
	}
}
void replace()  //case c
{
	int k,r;
	printf("Enter index of element to be replaced: ");
	scanf("%d",&k);
	printf("Enter replacement: ");
	scanf("%d",&r);
	arr[k]=r;
}
void search()  //case d
{
	int i,key,c=0;
	printf("Enter the element to be searched: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("Element found at index %d",i);
			c++;
			break;
		}
	}
	if(c==0)
		printf("Element not found");
}
void display()  //case e
{
	int i;
	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);
}

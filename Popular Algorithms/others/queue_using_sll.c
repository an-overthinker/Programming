#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;
};
typedef struct node S; 
S *top=NULL,*newnode,*ptr;
int flag=0;
void ENQUE(int);
int DELQUE();
void DISPLAY();
int main()
{
	char ch;
	int val;
	while(ch!='d')
	{
		printf("\n\nUSER'S CHOICE:-\nEnter a to insert an element in queue\nEnter b to delete an element from queue\nEnter c to display the queue\nEnter d to exit the program\nEnter your choice: ");
    	scanf(" %c",&ch);
    	switch(ch)
    	{
		    case 'a': newnode=(S*)malloc(sizeof(S));
	                  if(newnode==NULL)
	                	  printf("Queue Overflow.");
	                  else
	                  {
	                  	  printf("Enter element to insert: ");
		                  scanf("%d",&val);
		                  ENQUE(val);
	                  }
		              break;
		              
		    case 'b': if(top==NULL)
		                  printf("Queue Underflow.");
		              else
		                  printf("The deleted element is %d",DELQUE());
		              break;
		              
	    	case 'c': if(top==NULL)
		                  printf("Empty Queue.");
		              else
		              {
		                  printf("The elements are:\n");
						  DISPLAY();
					  }
				      break;
				      
	     	case 'd': free(top);
	     	          free(ptr);
	     	          free(newnode);
			          exit(0);
			          
	     	default : printf("Inappropriate choice.\n");
        }
	}
	return 1;
}
void ENQUE(int data)
{
	if(flag==0)
	{
		newnode->info=data;
	    newnode->link=top;
    	top=newnode;
	}
	else
	{
		newnode->info=data;
	    newnode->link=NULL;
	    ptr=top;
	    while(ptr->link!=NULL)
		    ptr=ptr->link;
	    ptr->link=newnode;
	}
	flag++;
}
int DELQUE()
{
	int data;
	data=top->info;
    top=top->link;
	flag--;
	return data;
}
void DISPLAY()
{
	ptr=top;
	while(ptr!=NULL)
	{
		printf("%d  ",ptr->info);
		ptr=ptr->link;
	}
}

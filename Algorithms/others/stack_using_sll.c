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
void push(int);
int pop();
void display();
int main()
{
	char ch='0';
	int val;
	while(ch!='d')
	{
		printf("\n\nUSER'S CHOICE:-\nEnter a to push an element in stack\nEnter b to pop an element from stack\nEnter c to display the stack\nEnter d to exit the program\nEnter your choice: ");
    	scanf(" %c",&ch);
    	switch(ch)
    	{
		    case 'a': newnode=(S*)malloc(sizeof(S));
	                  if(newnode==NULL)
					  {
	                	  printf("Stack Overflow.");
	                	  break;
	                  }
			          printf("Enter element to push: ");
		              scanf("%d",&val);
		              push(val);
		              break;
		              
		    case 'b': if(top==NULL)
		                  printf("Stack Underflow.");
		              else
		                  printf("The deleted element is %d",pop());
		              break;
		              
	    	case 'c': if(top==NULL)
		                  printf("Empty Stack.");
		              else
		              {
		                  printf("The elements are:\n");
						  display();
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
void push(int data)
{
	newnode->info=data;
	newnode->link=top;
	top=newnode;
	flag++;
}
int pop()
{
	int data;
	data=top->info;
    top=top->link;
	flag--;
	return data;
}
void display()
{
	ptr=top;
	while(ptr!=NULL)
	{
		printf("%d  ",ptr->info);
		ptr=ptr->link;
	}
}

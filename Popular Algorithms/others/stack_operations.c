//STACK OPERATIONS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void PUSH(int);
int POP();
void DISPLAY();

int stack[SIZE],top=-1,val;
void main()
{
	char ch;
	while(1)
	{
		printf("\nUSER'S CHOICE:\nEnter a to insert an element in stack\nEnter b to delete an element from stack\nEnter c to display elements of the stack\nEnter anything else to exit the program\nEnter your choice: ");
	    scanf(" %c",&ch);
	    switch(ch)
	    {
	    	case 'a': if(top==SIZE-1)
	    	              printf("STACK OVERFLOW.");
	    	          else
	    	          {
	    	          	  printf("Enter element to push: ");
		                  scanf("%d",&val);
		                  PUSH(val);
	    	          }
		              break;
		           
	    	case 'b': if(top==-1)
	    	              printf("STACK UNDERFLOW.");
                      else	    	           
			              printf("The popped element is %d",POP());
		              break;
		              
		    case 'c': if(top==-1)
	    	              printf("STACK IS EMPTY.");
                      else	    	           
			              DISPLAY();
		              break;
		              
		    default: exit(0);
	    }
	}
}
void PUSH(int val)
{
	top++;
	stack[top]=val;
}
int POP()
{
	val=stack[top];
	top--;
	return val;
}
void DISPLAY()
{
	int i;
	printf("The stack is:\n");
	for(i=top;i>=0;i--)
	    printf("%d  ",stack[i]);
}

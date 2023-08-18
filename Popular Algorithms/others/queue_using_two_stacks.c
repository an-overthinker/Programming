//QUEUE USING STACK
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void PUSH1(int);
int POP1();
void PUSH2(int);
int POP2();
void DISPLAY();
void DEQUEUE();

int stack1[SIZE],stack2[SIZE],top1=-1,top2=-1,c=0,val;
void main()
{
	char ch;
	while(1)
	{
		printf("\nUSER'S CHOICE:\nEnter a to insert an element in queue\nEnter b to delete an element from queue\nEnter c to display elements of the queue\nEnter anything else to exit the program\nEnter your choice: ");
	    scanf(" %c",&ch);
	    switch(ch)
	    {
	    	case 'a': if(top1==SIZE-1)
	    	              printf("QUEUE OVERFLOW.");
	    	          else
	    	          {
	    	          	  printf("Enter element to push: ");
		                  scanf("%d",&val);
		                  PUSH1(val);
	                      c++;
	    	          }
		              break;
		           
	    	case 'b': if((top1==-1) && (top2==-1))
	    	              printf("QUEUE UNDERFLOW.");
                      else	    	           
			              DEQUEUE();
		              break;
		              
		    case 'c': if((top1==-1) && (top2==-1))
	    	              printf("QUEUE IS EMPTY.");
                      else	    	           
			              DISPLAY();
		              break;
		              
		    default: exit(0);
	    }
	}
}
void DEQUEUE()
{
	int i;
	for(i=0;i<c;i++)
		PUSH2(POP1());
	printf("The deleted element is %d",POP2());
	c--;
	for(i=0;i<c;i++)
		PUSH1(POP2());
}
void PUSH1(int val)
{
	stack1[++top1]=val;
}
int POP1()
{
	return stack1[top1--];
}
void PUSH2(int val)
{
	stack2[++top2]=val;
}
int POP2()
{
	return stack2[top2--];
}
void DISPLAY()
{
	int i;
	printf("The queue is:\n");
	for(i=0;i<=top1;i++)
	    printf("%d  ",stack1[i]);
}

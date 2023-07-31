//CIRCULAR QUEUE OPERATIONS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int cqueue[SIZE];
int front= -1,rear= -1;

void CENQUE(int);
int CDELQUE();
void CDISPLAY();
void main()
{
    char ch;
	int x;
    while(1)
    {
        printf("\nUSER'S CHOICE:\nEnter a to insert an element in circular queue\nEnter b to delete an element from circular queue\nEnter c to display the elements of the circular queue\nEnter anything else to exit the program\nEnter your choice: ");
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'a': if((front==0 && rear==SIZE-1) || (front==rear+1))
                          printf("CIRCULAR QUEUE OVERFLOW.");
                      else
                      {
                          printf("Enter integer to insert in queue: ");
                          scanf("%d",&x);
                          CENQUE(x);
                      }
                      break;
                      
            case 'b': if(front==-1)
                          printf("CIRCULAR QUEUE UNDERFLOW.");
                      else
                      	   printf("The deleted element is %d",CDELQUE());
                      break;
                      
            case 'c': if(rear==-1 && front==-1)
                          printf("Queue is empty.");
                      else
			              CDISPLAY();
                      break;
                      
            default:  exit(0);
        }
    }
}
void CENQUE(int x)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    else
	    rear=(rear+1)%SIZE;
	cqueue[rear]=x;
}
int CDELQUE()
{
    int val;
    val=cqueue[front];
    if(front==rear)
    {
    	front=-1;
    	rear=-1;
	}
	else
	    front=(front+1)%SIZE;
	return val;
}
void CDISPLAY()
{
    int i;
    for(i=front;i!=rear;i=(i+1)%SIZE)
        printf("%d  ",cqueue[i]);
    printf("%d",cqueue[rear]);
}

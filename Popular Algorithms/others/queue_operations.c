//QUEUE OPERATIONS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

char queue[SIZE];
int front= -1,rear= -1;

void ENQUE(char);
char DELQUE();
void DISPLAY();
void main()
{
    char ch,x,s;
    while(1)
    {
        printf("\nUSER'S CHOICE:\nEnter a to insert an element in queue\nEnter b to delete an element from queue\nEnter c to display the elements of the queue\nEnter anything else to exit the program\nEnter your choice: ");
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'a': if(rear==SIZE-1) //STRICTLY LINEAR QUEUE
                          printf("QUEUE OVERFLOW.");
                      else
                      {
                          printf("Enter character to insert in queue: ");
                          scanf(" %c",&x);
                          ENQUE(x);
                      }
                      break;
                      
            case 'b': if(front==-1 || front>rear)
                          printf("QUEUE UNDERFLOW.");
                      else
                      	   printf("The deleted element is %c",DELQUE());
                      break;
                      
            case 'c': if(front==-1 || front>rear)
                          printf("Queue is empty.");
                      else
			              DISPLAY();
                      break;
                      
            default:  exit(0);
        }
    }
}
void ENQUE(char x)
{
      rear++;
      if(front==-1)
          front=0;
      queue[rear]=x;
}
char DELQUE()
{
     return queue[front++];
}
void DISPLAY()
{
    int i;
    printf("The queue is:\n");
    for(i=front;i<=rear;i++)
        printf("%c ",queue[i]);
}

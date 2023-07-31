#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;
};
typedef struct node S;
S *start=NULL,*newnode,*ptr,*loc;
int flag=0;
void insert();
int del();
void traverse();
int main()
{
	char c='0',ch='0';
	do
	{
		newnode=(S*)malloc(sizeof(S));
		if(newnode==NULL)
	    {
		    printf("Memory could not be allocated");
		    break;
    	}
	    printf("Enter value for %dth node: ",++flag);
    	scanf("%d",&newnode->info);
    	if(start==NULL)
    	{
    		start=newnode;
    		newnode->link=NULL;
		}
		else
		{
			ptr=start;
			while(ptr->link!=NULL)
			    ptr=ptr->link;
			ptr->link=newnode;
		    newnode->link=NULL;
		}
		printf("Do you want to create another node(Y/N)?");
		scanf(" %c",&c);
	}while(c=='Y'||c=='y');
	
	while(ch!='d')
	{
		printf("\n\nUSER'S CHOICE:-\nEnter a to insert an element in link list\nEnter b to delete an element from link list\nEnter c to traverse the link list\nEnter d to exit the program\nEnter your choice: ");
    	scanf(" %c",&ch);
    	switch(ch)
    	{
		    case 'a': insert();
		              break;
		    case 'b': if(start==NULL)
		                  printf("Empty link list.");
		              else
		                  printf("The deleted element is %d",del());
		              break;
	    	case 'c': if(start==NULL)
		                  printf("Empty link list.");
		              else
		              {
		                  printf("The elements are:\n");
						  traverse();
					  }
				      break;
	     	case 'd': free(start);
	     	          free(ptr);
	     	          free(newnode);
	     	          free(loc);
			          exit(0);
	     	default : printf("Inappropriate choice.\n");
        }
	}
	return 1;
}
void insert()
{
	int pos,x,data,i;
	printf("\nUSER'S CHOICE:-\nEnter 1 to insert an element at beginning\nEnter 2 to insert an element at end\nEnter 3 to insert an element at a specific position\n");
	printf("Enter your choice: ");
    scanf("%d",&x);
    switch(x)
    {
		case 1: //insert at beginning
		          newnode=(S*)malloc(sizeof(S));
	              if(newnode==NULL)
	              {
		              printf("\nMemory could not be allocated");
		              break;
                  }
		          printf("Enter data to insert: ");
                  scanf("%d",&data);
		          newnode->info=data;
		          newnode->link=start;
		          start=newnode;
		          flag++;
		          break;
		          
		case 2: //insert at end
		          newnode=(S*)malloc(sizeof(S));
	              if(newnode==NULL)
	              {
		              printf("Memory could not be allocated.");
		              break;
                  }
		          printf("Enter data to insert: ");
                  scanf("%d",&data);
		          newnode->info=data;
		          newnode->link=NULL;
		          ptr=start;
		          while(ptr->link!=NULL)
		              ptr=ptr->link;
		          ptr->link=newnode;
		          flag++;
		          break;
		          
		case 3: //insert at specific position
		          newnode=(S*)malloc(sizeof(S));
	              if(newnode==NULL)
	              {
		              printf("Memory could not be allocated");
		              break;
                  }
		          printf("Enter position of insertion of new node: ");
			      scanf("%d",&pos);
			      if(pos>=0 && pos<=flag)
			      {
			      	  printf("Enter data to insert: ");
                      scanf("%d",&data);
			          newnode->info=data;
			          ptr=start;
			          for(i=1;i<pos-1;i++)
			              ptr=ptr->link;
			          newnode->link=ptr->link;
			          ptr->link=newnode;
			          flag++;
				  }
				  else
				      printf("Position out of bounds.\n");
			      break;
			      
	    default: printf("Inappropriate choice.\n");
    }
}
int del()
{
	int x,data,pos,i;
	printf("\nUSER'S CHOICE:-\nEnter 1 to delete an element from beginning\nEnter 2 to delete an element from end\nEnter 3 to delete an element from a specific position\nEnter your choice: ");
    scanf("%d",&x);
    switch(x)
    {
		case 1: //delete from beginning
		          data=start->info;
		          start=start->link;
		          flag--;
		          return data;
		          
		case 2: //delete from end
		          if(flag==1)
		          {
		          	  data=start->info;
		              start=start->link;
		              flag--;
		              return data;
				  }
		          else
		          {
		              ptr=start;
		              while(ptr->link!=NULL)
		              {
		                  loc=ptr;
		                  ptr=ptr->link;
		              }
		              data=ptr->info;
		              loc->link=NULL;
		              flag--;
		              free(ptr);
		              return data;
				  }
		          
		case 3: //delete from specific position
		          printf("Enter position of deletion: ");
			      scanf("%d",&pos);
			      if(pos==1 && flag==1)
			      {
			          data=start->info;
		              start=start->link;
		              flag--;
		              return data;
				  }
			      else if(pos>=0 && pos<=flag)
			      {
			          ptr=start;
			          for(i=1;i<pos;i++)
			          {
			              loc=ptr;
			              ptr=ptr->link;
					  }
					  data=ptr->info;
			          loc->link=ptr->link;
			          flag--;
			          free(ptr);
			          return data;
				  }
				  else
				  {
				  	  printf("Position out of bounds.");
				  	  return -999;
				  } 
			      
	    default: printf("\nInappropriate choice.\n");
	             return -999;
    }
}
void traverse()
{
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d  ",ptr->info);
		ptr=ptr->link;
	}
}

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *lchild;
	int data;
	struct node *rchild;
}node;
void insert(node *root, node *newnode)
{
	if(newnode->data<root->data)
	{
		if(root->lchild==NULL)
		    root->lchild=newnode;
		else
		    insert(root->lchild,newnode);
		    
	}
	else if(newnode->data>root->data)
	{
		if(root->rchild==NULL)
		    root->rchild=newnode;
		else
		    insert(root->rchild,newnode);
	}
	else
	    free(newnode);
}
void inorder(node *temp)
{
	if(temp!=NULL)
	{
		inorder(temp->lchild);
		printf("%d  ",temp->data);
		inorder(temp->rchild);
	}
}
void preorder(node *temp)
{
	if(temp!=NULL)
	{
		printf("%d  ",temp->data);
		preorder(temp->lchild);
		preorder(temp->rchild);
	}
}
void postorder(node *temp)
{
	if(temp!=NULL)
	{
		postorder(temp->lchild);
		postorder(temp->rchild);
		printf("%d  ",temp->data);
	}
}
int main()
{
	int choice,key;
	char ans='N';
	node *newnode,*root=NULL;
	while(1)
	{
		printf("\nEnter 1 for construction\nEnter 2 for inorder traversal\nEnter 3 for preorder traversal\nEnter 4 for postorder traversal\nEnter 5 to exit\nEnter your choice: ");
	    scanf("%d",&choice);
		switch(choice)
		{
			case 1: do
			        {
			        	newnode=(node*)malloc(sizeof(node));
			        	newnode->lchild=NULL;
			        	newnode->rchild=NULL;
			        	printf("Enter element: ");
			        	scanf("%d",&newnode->data);
			        	if(root==NULL)
			        	    root=newnode;
			        	else
			        	    insert(root,newnode);
			        	printf("Want to insert another node?(Y/N): ");
			        	scanf(" %c",&ans);
					}while(ans=='Y' || ans=='y');
					break;
					
			case 2: printf("\nInorder Traversal\n");
			        inorder(root);
			        break;
			        
			case 3: printf("\nPreorder Traversal\n");
			        preorder(root);
			        break;
			        
			case 4: printf("\nPostorder Traversal\n");
			        postorder(root);
			        break;
			        
			case 5: exit(0);
			
			default: printf("Inappropriate Choice\n");
		}
	}
	
	return 1;
}


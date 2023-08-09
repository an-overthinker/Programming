#include<stdio.h>
#define vertex 10
int cost[vertex][vertex],dist[vertex],predecessor[vertex];
void dijikstra(int n,int s)
{
	int i,c,u,v,min,status[n];
	for(i=1;i<=n;i++)
	{
		status[i]=0;			//no vertex is explored initially
		dist[i]=cost[s][i];		//initial cost of s to i is of the direct path(if exists) or 999(oterwise)
		predecessor[i]=s;		//initially, predecessor of every vertex is source vertex
	}
	predecessor[s]=0;			//predecessor of source is NIL
	dist[s]=0;					//cost to reach source from source is 0
	status[s]=1;				//source is explored
	for(c=2;c<=n;c++)			//for remaining n-1 vertices
	{
		min=999;
		for(i=1;i<=n;i++)		//to extract minimum from the set of remaining vertices
		{
			if((dist[i]<min) && (status[i]!=1))		
			{
				min=dist[i];
				u=i;
			}
		}
		status[u]=1;
		for(v=1;v<=n;v++)											//relaxation via vertex u
		{
			if((dist[v]>(dist[u]+cost[u][v])) && (status[v]!=1))	//if via path cost from v is less than prior cost and v is not explored
			{
				dist[v]=dist[u]+cost[u][v];							//applying relaxation
				predecessor[v]=u;
			}
		}
	}
}
void main()
{
	int i,j,n,s,x,t;
	printf("Enter the no. of nodes: ");
	scanf("%d",&n);
	printf("Input adjacency matrix:-\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	printf("Enter source vertex: ");
	scanf("%d",&s);
	dijikstra(n,s);
	printf("\nThe shortest distances from source to other vertices are:\n");
	for(i=1;i<=n;i++)
		printf("Source --> Vertex %d: %d\n",i,dist[i]);
	printf("\nTheir respective predeccessors are:");
	for(i=1;i<=n;i++)
		printf("\nVertex %d: %d\t",i,predecessor[i]);
}
/*
0 10 0 0 5
0 0 1 0 2
0 0 0 4 0
7 0 6 0 0
0 3 9 2 0
*/

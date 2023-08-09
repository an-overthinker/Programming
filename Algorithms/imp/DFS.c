#include<stdio.h>
int n,G[10][10],visited[10];
void dfs(int v)
{
	int i;
	printf("%d\t",v);
	visited[v]=1;
	for(i=1;i<=n;i++)
	{
		if((!visited[i])&&(G[v][i]==1))					//if ith vertex is connected but not visited yet
			dfs(i);
	}
}
void main()
{
	int i,j,s;
	printf("Enter no. of nodes: ");
	scanf("%d",&n);
	printf("Input adjacency matrix: \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			scanf("%d",&G[i][j]);
	}
	for(i=1;i<=n;i++)
		visited[i]=0;
	printf("Enter starting vertex: ");
	scanf("%d",&s);
	printf("\nThe nodes traversed following DFS algorithm are:\n");
	dfs(s);
}
/*
0 1 0 1 1 0 0
1 0 1 0 0 1 1
0 1 0 0 0 0 0
1 0 0 0 0 0 0
1 0 0 0 0 0 0
0 1 0 0 0 0 0
0 1 0 0 0 0 0
*/

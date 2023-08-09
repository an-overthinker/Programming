#include <stdio.h>
int n,g[10][10],q[10],visited[10],front=0,rear=0;
/*
0 1 0 1 1 0 0
1 0 1 0 1 0 0
0 1 0 0 1 1 1
1 0  0 0 1 0 0
1 1 1 1 0 1 0
0 0 1 0 1 0 1
0 0 1 0 0 1 0
*/

void bfs(int v){
	int i,j;
	for(i=1;i<=n;i++){
		if(!visited[i] && g[v][i]==1){
			q[++rear]=i;//added to queue
			visited[i]=1;
			printf("%d ",i);
		}
//		if(front<=rear){//check if queue has more than one element
//			bfs(q[front++]);
//		}
	}
	if(front<=rear){//check if queue has more than one element
			bfs(q[front++]);
		}
}
int main(){
	int i,j,s;
	printf("enter nodes:");
	scanf("%d",&n);
	printf("enter matrix: ");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&g[i][j]);
		}
	}
	printf("enter source: ");
	scanf("%d",&s);
	for(i=1;i<=n;i++){//initializing queue and visited array
		q[i]=0;
		visited[i]=0;
	}
	visited[s]=1;//source identified
	printf("%d ",s);
	bfs(s);
}

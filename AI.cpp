#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define g 5
int G[10][10], visited[10],n;
void DFS(int);

int main()
{
	int i,j;
	printf("Number of vertices:");
	scanf("%d", &n);
	printf("Enter adjacency matrix:");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		scanf("%d", &G[i][j]);
	}
	for(i=0; i<n; i++) //initially all node are unvisited
	{
		visited[i]=0;
	}
	DFS(0); //start with node 0
	
}
 void DFS(int i)
 {
 	int j;
 	printf("\n %d", i);
 	visited[i]=1;
 	for(j=0; j<n; j++)
 	{
 		if(i==g)
 		exit(0);
		 if(!visited[j]&&G[i][j]==1)
 		DFS(j);
	 }
 }

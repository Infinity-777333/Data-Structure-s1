#include<stdio.h>
int stack[100],visited[100],top=-1;
void push(int value)
{
  
  if(top==99)
  {
  printf("\nStack is full\n");
}
    
   stack[++top]=value;
   }
   
int pop()
{
  if(top==-1)
  {
   return -1;
   }
   
   return stack[top--];
   }

void dfs(int start,int adj[10][10],int n)
{
int i;
 push(start);
 visited[start]=1;
 printf("DFS Traversal (non-reccursive):");
 
 while(top!=-1)
  {
   int current=pop();
   printf("%d ",current);
   
   for(i=n-1;i>=0;i--)
    {
     if(adj[current][i]==1 && visited[i]!=1)
     {
      push(i);
      visited[i]=1;
      }
      }
      }
      printf("\n");
      } 
 

   
  
 int main()
 {
   int start,n,adj[10][10];
   printf("\nEnter the number of vertices:");
   scanf("%d",&n); 
   printf("\nEnter the Adjacency matrix\n");
   
   for(int i=0;i<n;i++)
    {
     for(int j=0;j<n;j++)
      {
      
      scanf("%d",&adj[i][j]);
      }
     
      }
      
      
    printf("Enter the starting point:");
    scanf("%d",&start);
    
    dfs(start,adj,n);
    
    return 0;
    }
    
      
  

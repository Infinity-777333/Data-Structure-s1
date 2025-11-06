#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
int isfull()
 {
  if((rear+1)%MAX==front)
   {
   return 1;
   }
   return 0;
   }
   
 int isempty()
 {
  if(front==-1 && rear==-1)
  {
  return 1;
  }
  return 0;
  }
  
 void display()
 {
  int i;
  
  if(isempty())
  {
  printf("\n Queue is Empty\n");
  return;
  }
  printf("\n Queue elements\n");
  i=front;
  do
  {
  printf(" %d ",queue[i]);
  i=(i+1)%MAX;
  }
  while(i!=(rear+1)%MAX);
  printf("\n");
  }
void dequeue()
{
  if(isempty())
  {
   printf("'\n Queue is empty\n");
   return;
   }
  printf("\n %d is deleted\n",queue[front]);
   if(front==rear)
   {
   front=rear=-1;
   }
   else
   {
   front=(front+1)%MAX;
   }
   }
 void enqueue()
 {
 int x;
 if(isfull())
 {
  printf("\n Queue is full\n");
  return;
  }
  printf("\n Enter the element to insert :");
  scanf("%d",&x);
  if(isempty())
  {
   front=rear=0;
   }
  else
  {
  rear=(rear+1)%MAX;
  }
  queue[rear]=x;
  printf("\n Element %d is inserted successfully\n\n",queue[rear]);
    }
    
    
  void search()
  {
  int key,i,found=0;
  if(isempty())
  {
   printf("\n Queue is Empty\n");
  return;
  }
  printf("\nEnter the element to search:");
  scanf("%d",&key);
  i=front;
  do
  {
  if(queue[i]==key)
  {
  int pos=(i-front+MAX)%MAX+1;
  printf("\n Element %d found at the position %d \n",key,pos);
  found=1;
  break;
  }
  i=(i+1)%MAX;
  }
  while (i!=(rear+1)%MAX);
   if(!found)
   {
   printf("\n Element %d not found in the queue \n",key);
   }
   }
 
 int main()
   {
    int choice;
    printf("\n *****Circular queue using array*****\n");
    do 
    {
    printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Search \n 5.Exit \n\n Enter your choice ");
    scanf("%d",&choice);
      
      switch(choice)
       {
        case 1:enqueue();
        break;
        
        case 2:dequeue();
        break;
     
        case 3:display();
        break;
  
        case 4:search();
        break;
        
        case 5:printf("\nExiting\n");
        
        return 0;
        
        default:printf("\n Invalid choice\n");
        break;
       }
       }
       while (choice!=5);
       return 0;
       }
       
       
       
       
       
       
       
       
       
       

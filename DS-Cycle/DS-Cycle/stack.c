#include<stdio.h>
#define MAX 10

 int stack[MAX];
 int top=-1;
 
 
  void push(int item)
  {
  if(top==MAX)
  {
  printf("\n stack over flow!\n");
  return;
  }
  stack[++top]=item;
  printf("\n%d pushed to stack\n",item);
  }
  
  
  void pop()
  {
  if(top==-1)
  {
  printf("\n stack underflow!\n");
  return;
  }
  printf("\n %d popped from stack.\n",stack[top--]);
  }
  
  
  void peek()
  {
  if(top==-1)
  {
  printf("Stack is empty!\n");
  }
  printf("Top element is %d\n",stack[top]);
  return;
  }
  
  
  void display()
  {
  if(top==-1)
  {
  printf("Stack is empty!\n");
  }
  printf("Stack elements are: ");
  for(int i=top;i>=0;i--)
   {
    printf(" %d",stack[i]);
    }
    }
    
  int main()
  {
   int choice,value;
    while(1)
  { 
  printf("\n*****STACK OPERATION MENU******\n");
  printf("\n 1.PUSH");
  printf("\n 2.POP");
  printf("\n 3.PEEK");
  printf("\n 4.DISPLAY");
  printf("\n 5.EXIT");
  printf("\n \nEnter your choice:"); 
  scanf("%d",&choice);
 
 switch(choice)
   { 
    case 1:
       printf("\nEnter value to push:");
       scanf("%d",&value);
       push(value);
       break;
    case 2:pop();
           break;
    case 3:peek();
           break;
    case 4:display();
           break;
    case 5:
         printf("\n Exiting Program.");
         return 0;
         
         default:
            printf("\n Invalid choice");
            return 0;
     }
     }
            return 0;
       }

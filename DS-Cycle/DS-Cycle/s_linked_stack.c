#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *link;
 };
 
 struct node *top=NULL;
 
 void push()
 {
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode==NULL)
  {
    printf("\nNo space available!!!\n");
    return;
    }
   
   newnode->link=NULL;
   printf("\nEnter the element to insert:");
   scanf("%d",&newnode->data);
   printf("The element %d pushed to stack",newnode->data);
   
   if(top==NULL)
   {
    top=newnode;
    
    return;
    }
   
   newnode->link=top;
   top=newnode;
   return;
   }
 
 
 
  void pop()
  {
   struct node *temp=top;
   if(top==NULL)
   {
    printf("Stack is empty\n");
    return;
    }
   
    top=top->link;
    
     printf("The element %d is deleted from stack\n",temp->data);
    
    }
    
    
    
    void peek()
    {
     
      if(top==NULL)
     {
    printf("Stack is empty\n");
    return;
    }
    
     printf("The peek element is %d\n",top->data);
     return;
     }
     
     
     
     
     void display()
     {
      struct node *temp=top;
      
        if(top==NULL)
     {
      printf("Stack is empty\n");
     return;
     }
    
     printf("The elements in the stack are :");
     while(temp!=NULL)
     {
      printf(" %d",temp->data);
      temp=temp->link;
      }
      free(temp);
      return;
   }
    
     void search()
     {
      
      int key,found=0;
      struct node *temp=top;
      
          if(top==NULL)
     {
      printf("Stack is empty\n");
     return;
     }
     
     printf("\nEnter the element that want to search:");
     scanf("%d",&key);
     
     while(temp!=NULL)
     {
      if(temp->data==key)
      {
       printf("The element %d is found in stack\n",key);
       found=1;
       }
       temp=temp->link;
       }
       
       if(found!=1)
        {
printf("The element %d is not found!!\n",key);

}
return;}

 
 
   void main()
   {
    int choice;
     
      printf("\n******8Singly Linked Stack******\n");
      do
      
      {
        printf("\n 1-Push\n 2-Pop \n 3-Peek\n 4-Display\n 5-Search\n 6-Exit \n\n Enter your choice:");
        scanf("%d",&choice);
        
        
        switch(choice)
        {
          case 1:
                push();
                break;
          
          case 2:
                pop();
                break;
          case 3:
                peek();
                break;
          case 4:
                display();
                break;
          case 5:
                search();
                break;
          case 6:
                printf("\nExiting!!!\n");
                break;
          default:
                printf("\nEnter a valid choice \n");
                break;
         }}
         while(choice!=6);
         }      
       
      

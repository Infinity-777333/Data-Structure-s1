#include<stdio.h>
#include<stdlib.h>
 
 struct node
 {
  int data;
   struct node *link;
   };
    
   struct node *head=NULL;
   
   void enqueue()
   {
   
    struct node *temp=head,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    
    if(newnode==NULL)
    {
     printf("No space available\n");
     return;
     }
     newnode->link=NULL;
     printf("\nEnter the element to insert:");
     scanf("%d",&newnode->data);
     printf("The element %d is inserted successfully\n",newnode->data);
     if(head==NULL)
     {  
      head=newnode;
      return;
      }
      else
      {
       while(temp->link!=NULL)
       {
        temp=temp->link;
        }
        temp->link=newnode;
        
        }
        }
        
        
        
      void dequeue()
      {
       if(head==NULL)
       {
        printf("Queue is empty\n");
        return;
        }
        printf("The element %d is deleted from queue",head->data);
        head=head->link;
        return;
        }
        
           void display()
     {
      struct node *temp=head;
      
        if(head==NULL)
     {
      printf("No element\n");
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
      
      int key,found=0,pos=1;
      struct node *temp=head;
      
          if(head==NULL)
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
       printf("The element %d is found at the position %d\n",key,pos);
       found=1;
       }
       temp=temp->link;
       pos++;
       }
       
       if(found!=1)
        {
printf("The element %d is not found!!\n",key);

}
return;}

 
  
        void main()
        {
          int choice;
          printf("\n*****Singly linked Queue***\n");
          do
          {
          
           printf("\n 1-Enqueue\n 2-Dequeue \n 3-Display \n 4-Search \n 5-Exit\n Enter your choice:");
           scanf("%d",&choice);
           switch(choice)
           {
            case 1:
                 enqueue();
                  break;
            case 2:
                 dequeue();
                  break;
            case 3:
                 display();
                  break;
            case 4:
                 search();
                  break;
            case 5:
                 printf("\nExiting\n");
                  break;
            default:
                 printf("\nEnter a valid data\n"); 
                  break;
            }
            }
            
            
            
            while(choice!=5);
               }

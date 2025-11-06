#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


struct node
{
 int data;
 struct node *llink;
 struct node *rlink;
 };
 
struct node *head=NULL;


void insertfirst()
  {
    
  	  struct node *newnode;
    
  	  newnode=(struct node*)malloc(sizeof(struct node));
    
  	  if(newnode==NULL)
  	  {
  	   printf("\nNo space available for a new node\n");
  	   return;
     	   }
   
      newnode->llink=NULL;
      newnode->rlink=NULL;
      printf("\nEnter the element that want to insert at first position:");
      scanf("%d",&newnode->data);
      printf("\nThe element %d is inserted successfully\n",newnode->data);
      
     if(head==NULL)
      {
       head=newnode;
       }
       
     else
       {
       newnode->rlink=head;
       head->llink=newnode;
       head=newnode;
       }
       return;
       }
       
       
       

 void insertlast()
        {
          struct node *newnode,*temp=head;
    
  	  newnode=(struct node*)malloc(sizeof(struct node));
    
  	  if(newnode==NULL)
  	  {
  	   printf("\nNo space available for a new node\n");
  	   return;
     	   }
          
            newnode->llink=NULL;
            newnode->rlink=NULL;
      printf("\nEnter the element that want to insert at last position:");
      scanf("%d",&newnode->data);
      printf("\nThe element %d is inserted successfully\n",newnode->data);
      
     if(head==NULL)
      {
       head=newnode;
       }
       
     else
     {
      
      while(temp->rlink!=NULL)
       {
        temp=temp->rlink;
        }
      temp->rlink=newnode;
      newnode->llink=temp;
      }
      }
          
          
          
          
     
   void insertlocation()
    {
     
     int key;
  	  struct node *newnode,*temp=head,*nxt=NULL;
    
  	  newnode=(struct node*)malloc(sizeof(struct node));
    
  	  if(newnode==NULL)
  	  {
  	   printf("\nNo space available for a new node\n");
  	   return;
     	   }
     	  
     	  if(head==NULL)
     	  {
     	   printf("\n No elements present in list\n");
     	   return;
     	   }
     	   
     	  
   
      newnode->llink=NULL;
      newnode->rlink=NULL;
      
      printf("\nEnter the element where after you want to insert:");
      scanf("%d",&key);
     
     while(temp!=NULL && temp->data!=key)
     {
       temp=temp->rlink;
       }
      
     if(temp==NULL)
      {
       printf("\nElement not found in list\n");
       }
      printf("\nEnter the element that want to insert:");
      scanf("%d",&newnode->data); 
      if(temp->rlink==NULL)
      { 
       temp->rlink=newnode;
       newnode->llink=temp;
       }
       
       else
       {
         nxt=temp->rlink;
         temp->rlink=newnode;
         newnode->llink=temp;
         newnode->rlink=nxt;
         nxt->llink=newnode;
         }
         return;
         }
         
        
       
       
       
     
     
       
    void display()
    
     {
      struct node *temp=head;
      
      if(head==NULL)
       {
        printf("\nList is empty\n");
        return;
        }
       
        
       printf("\nElements in the List:");
       while(temp!=NULL)
       {
       printf("%d ",temp->data);
        temp=temp->rlink;
        }
        }  
        
       
       void main()
       {
        int choice;
        
        printf("\n *****Doubly linked Queue****\n");
        
        do
        {
         printf("\n 1-Insert First \n 2-Insert Last \n 3-Insert Location \n 4-Delete First\n 5-Delete Last \n 6-Delete Location \n 7-Display \n 8-Search \n 9-Exit \n\n Enter your choice:");
         scanf("%d",&choice);
         switch(choice)
         {
          case 1:
                insertfirst();
                break;
          case 2:
                insertlast();
                break;
          case 3:
                insertlocation();
                break; 
          case 4:
                insertfirst();
                break;
                
          case 7:
                 display();
                break;
     
          case 9:
                printf("\nExititng....\n");
                break;
            }
            }
            while(choice!=9);
            }    
            

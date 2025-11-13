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
       return;
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
         
        
    void deletefirst()
        {
         
        struct node *temp=head,*nxt=NULL;
        
        if(head==NULL)
        {
         printf("\nList is empty!\n");
         return;
         }
         printf("\n%d is deleted from the list\n",temp->data);
         if(temp->rlink==NULL)
         {
          head=NULL;
          }
          
         else
         { 
          nxt=temp->rlink;
          head=nxt;
          nxt->llink=NULL;
          }
          }
          
          
      void deletelast()
      {
       struct node *temp=head,*prv=NULL;
       
        if(head==NULL)
        {
         printf("\nList is empty!\n");
         return;
         }
         
         if(temp->rlink==NULL)
         {
         printf("\n%d is deleted from the list\n",temp->data);
          head=NULL;
          }
          
          else
          {
          while(temp->rlink!=NULL)
          {
           temp=temp->rlink;
           }
           printf("\n%d is deleted from the list\n",temp->data);
           prv=temp->llink;
           temp=prv;
           temp->rlink=NULL;
           return;
           }
          }
       
     void deletelocation()
     {
     int key;
       struct node *temp=head,*prv=NULL,*nxt=NULL;
       
        if(head==NULL)
        {
         printf("\nList is empty!\n");
         return;
         }
        
        printf("\nEnter the key which you want to delete:");
        scanf("%d",&key);
       
       while(temp!=NULL && temp->data!=key)
       {
        temp=temp->rlink;
        }
        
       if(temp==NULL)
       {
        printf("\nNo element found\n");
        return;
        }
         printf("\n%d is deleted from the list\n",temp->data);
        if(temp->llink==NULL)
         {
           
          head=temp->rlink;
           
           if(head!=NULL)
            {
             head->llink=NULL;
             }
             
          }
          else if(temp->rlink==NULL)
           {
            temp=temp->llink;
            temp->rlink=NULL;
            }
            
            
          else
          {
           prv=temp->llink;
           nxt=temp->rlink;
           prv->rlink=nxt;
           nxt->llink=prv;
           
           }
         }
          
      void search()
    {
    int key, pos = 1;
    struct node *temp = head;

    if (head == NULL)
    {
        printf("\nList is empty!\n");
        return;
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            printf("\nElement %d found at position %d\n", key, pos);
            return;
        }
        temp = temp->rlink;
        pos++;
    }

    printf("\nElement %d not found in the list\n", key);
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
        printf("\n\n");
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
               deletefirst();
                break;
          case 5:
                deletelast();
                break;
          case 6:
                deletelocation();
                break;
          case 7:
                 display();
                break;
          case 8:
                 search();
                 break;
          case 9:
                printf("\nExititng....\n");
                break;
          default:
                printf("\nEnter a valid choice!!!\n");
                break;
            }
            }
            while(choice!=9);
            }    
            

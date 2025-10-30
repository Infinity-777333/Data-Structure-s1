#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node*link;
 };
 
 struct node*head= NULL;
 
 void insertfirst()
 {
 struct node*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 
 if(newnode==NULL)
 {
  printf("\n No spaces available\n");
  return;
  }
  newnode->link=NULL;
  printf("Enter the value to insert to front\n");
  scanf("%d",&newnode->data);
   if(head==NULL)
   {
   head=newnode;
   }
   else
   {
    newnode->link=head;
    head=newnode;
    }
    printf("\n Element inserted %d",newnode->data);
    } 
    
    void insertlast()
    {
     struct node*temp=head,*newnode;
     newnode=(struct node*)malloc(sizeof(struct node));
     
     if(newnode==NULL)
     {
     printf("\n No space Available \n");
     return;
     }
     newnode->link=NULL;
     printf("\n Enter the element to insert last\n");
     scanf("%d",&newnode->data);
     
     if(head==NULL)
     {
     head=newnode;
     }
     else
     {
     while(temp->link!=NULL)
     {
     temp=temp->link;
     }
     temp->link=newnode;
     }
     printf("Element inserted successfully %d ",newnode->data);
     }
     
     void insertlocation()
     {
      int key;
      struct node*temp=head,*newnode;
      newnode=(struct node*)malloc(sizeof(struct node));
      if(newnode==NULL)
      {
      printf("\n No space available\n");
      return;
      }
      newnode->link=NULL;
      if(head==NULL)
      {
      printf("\n List empty\n");
      }
      else
      {
      printf("\n Enter the key where after you want to add element\n");
      scanf("%d",&key);
      while(temp!=NULL && temp->data!=key)
      {
       temp=temp->link;
       }
        
       if(temp==NULL)
       {
       printf("\n Value not exist\n");
       }
      else
      {
      printf("\n Enter the element to inserted\n");
      scanf("%d",&newnode->data);
      newnode->link=temp->link;
      temp->link=newnode;
      printf("value inserted successfully%d",newnode->data);
      }
      }
      }
      
   void deletefirst()
   {
   if(head==NULL)
   {
   printf("\n list empty\n");
   return;
   }
   struct node*temp=head;
   head=temp->link;
   printf("\n value deleted %d",temp->data);
   free(temp);
   }
   
   void deletelast()
   {
   if(head==NULL)
   {
   printf("\n empty list\n");
   return;
   }
   struct node*temp=head,*prev=NULL;
   if(temp->link==NULL)
   {
   printf("\n Value %d deleted",temp->data);
   free(temp);
   head=NULL;
   return;
   }
   while(temp->link!=NULL)
   {
   prev=temp;
   temp=temp->link;
   }
   printf("\n Value %d deleted \n",temp->data);
   prev->link=NULL;
   free(temp);
   }
   void deletelocation()
   {
   int key;
   struct node*temp=head,*prev=NULL;
   if(head==NULL)
   {
   printf("\n Empty list\n");
   return;
   }
   printf("\n Enter the element that you want to delete\n");
   scanf("%d",&key);
   if(temp->data==key)
    {
    head=temp->link;
    printf("\n Value %d is deleted\n",temp->data);
    free(temp);
    return;
    }
    while(temp!=NULL && temp->data!=key)
    {
     prev=temp;
     temp=temp->link;
     }
     if(temp==NULL)
     {
     printf("\n value NOT exist \n");
     return;
     }
     prev->link=temp->link;
     printf("Value %d is deleted",temp->data);
     free(temp);
     }
     
     void search()
     {
      struct node*temp=head;
      int pos=1,found=0,val;
      if(head==NULL)
      {
      printf("\n empty list \n");
      return;
      }
      printf("\n Enter the value to search");
      scanf("%d",&val);
      while(temp!=NULL)
      {
      if(temp->data==val)
      {
      printf("%d value found at %d location \n",temp->data,pos);
      found=1;
      }
      pos++;
      temp=temp->link;
      }
      if(!found)
      {
      printf("value %d not exist",val);
      }
      }
      
    void display()
    {
    struct node*temp=head;
    if(temp==NULL)
    {
    printf("\n list empty");
    return;
    }
    printf("\n Elements in the list \n");
    
    while(temp!=NULL)
    {
    printf("%d",temp->data);
    temp=temp->link;
    }
    }
    
    int main()
    {
    int choice;
    printf("\n SINGLY LINKED LIST\n");
    do{
    printf("\n\n 1-> Insert first \n 2-> Insert last \n 3->Insert location \n 4-> Delete first \n 5-> Delete last    \n 6->Delete location\n 7->Search \n 8->Display \n 9->Exit");
printf("\n->Enter choice:\n");
scanf("%d",&choice);

 switch(choice)
  {
   case 1:insertfirst();
          break;    
   case 2:insertlast();
          break; 
   case 3:insertlocation();
          break; 
   case 4:deletefirst();
          break;                     
   case 5:deletelast();
          break;        
   case 6:deletelocation();
          break; 
   case 7:search();
          break; 
   case 8:display();
          break; 
   case 9: printf("\n Exit \n");
          exit(0);
          break;  
   default : printf("\nINVALID CHOICE \n");
   }
   }
   while(choice!=9);
   return 0;
   }                              
   
   
   
                

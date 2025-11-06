#include<stdio.h>

 void main()
 {
 int i,j,n,arr[50],temp;
 
 printf("\nEnter the size of array:");
 scanf("%d",&n);
 
 printf("\nEnter the elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 
 
 //sorting
 
 for(i=0;i<n-1;i++)
 {
 for(j=0;j<n-i-1;j++)
 {
  if(arr[j]>arr[j+1])
  {
  temp=arr[j];
  arr[j]=arr[j+1];
  arr[j+1]=temp;
  }
  }
  }
  
  printf("\nThe sorted array is :");
  for(i=0;i<n;i++)
  {
  printf("  %d",arr[i]);
  }
  printf("\n");
  }

#include<stdio.h>
void main()
{
int a[50],i,n,s,flag=0;
printf("Enter the limit:");
scanf("%d",&n);
printf("\nEnter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("\nEnter the element to search=");
scanf("%d",&s);

for(i=0;i<n;i++)
{
if(a[i]==s)
{
flag=1;

printf("The element %d is found at the position %d\n\n",s,i+1);
break;
}
}
if(flag==0)
printf("The element is not found in this array\n\n");
}

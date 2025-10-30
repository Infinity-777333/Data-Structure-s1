#include<stdio.h>
void main()
{
int a[50],i,n,sum=0;
printf("Enter the limit:");
scanf("%d",&n);
printf("\nEnter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("The sum is=");

for(i=0;i<n;i++)
{
sum=sum+a[i];

}
printf("%d\n",sum);
}



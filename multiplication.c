#include<stdio.h>
void main()
{
int n,i;
printf("\nEnter Your Number\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf("\n %d * %d = %d",i,n,i*n);
printf("\n");
}
}

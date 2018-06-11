#include<stdio.h>
#include<stdlib.h>

 int total();
 int average();
 int sum;

 void main()
  {
   int t;
   float avg;
   

   t=total();
   printf("\n Total marks = %d/500",t);

   avg=average();  
   printf("\n\n Percentage = %.2f",avg);
   printf("\n ********************************************");

   getchar();
  }

 int total()
 {
   int s1,s2,s3,s4,s5;

   printf("\n Enter marks of 5 subjects each out of 100 ");
   printf("\n\n ********************************************");

   printf("\n\n Maths = ");
   scanf("%d",&s1);

   printf("\n Science = ");
   scanf("%d",&s2);

   printf("\n English = ");
   scanf("%d",&s3);

   printf("\n History = ");
   scanf("%d",&s4);

   printf("\n Geography = ");
   scanf("%d",&s5);
   printf("\n ********************************************");

 sum=s1+s2+s3+s4+s5;  //Total

 return(sum);
}

int average()
{
 return(sum/5);
}
#include<stdio.h>

int main()
{

//int arr[10]={1,1,0,1,1,0,0,1};
int arr[10];
int i,n;
int count0=0;
int count1=0;
printf("Enter The Size Of The Array");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
   scanf("%d",&arr[i]);
}

for(i=0;i<n;i++)
{
if(arr[i]==0)
  {
    count0++;
  }
else if(arr[i]==1)
  {
   count1++;
  }
}
printf("Number Of Zeroes\t %d",count0);
printf("\nNumber Of Ones\t%d",count1);

return 0;
}


 




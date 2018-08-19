#include <stdio.h>
  //Function to generate subset  
void subset(int arr[], int data[], int start, int end, int index, int r)
{
      int j, i;
        if (index == r) {
            for (j = 0; j < r; j++)
                printf("%d ", data[j]);
            printf("\n");
            return;
        }
        for (i = start; i <= end && end - i + 1 >= r - index; i++)
        {
            data[index] = arr[i];
            subset(arr, data, i+1, end, index+1, r);
        }
    }
    /*  Function to print the subset  */ 
    void printsubset(int arr[], int n, int r)
    {
        int data[r];
        subset(arr, data, 0, n - 1, 0, r);
    }
    /*  The main() begins  */
int main()
    {
       int arr[20], k, n, i,max;
        printf("Enter the number of input : ");
        scanf("%d", &n);
        printf("\nEnter the integers: \n");
        for (  i = 0; i < n; i++)
        {
    	scanf("%d", &arr[i]);
        }
        printf("Enter value of k: ");
        scanf("%d", &k);
	if (k>n)
		{
		printf("\nLength Of The Subset Is Not Valid\n");
		}
         
        printsubset(arr, n, k);
//Maximum Possible Length Of S
    max=n;
    printf("Maximum Posssible length of S is %d",n);
        return 0;
    }

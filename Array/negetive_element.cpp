// Write a C program to print all negative elements in array

#include<stdio.h>
int main()
{
    int num[50],n,i;
    //Input Array size...........
    printf("Enter size of array = ");
    scanf("%d",&n);

    //Input elements in Array............
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    //Print all Array elements..............
    printf("\nNegative Elements in array are: \n");
    for(i=0;i<n;i++)
    {   if(num[i]<0)
        {
            printf("Array[%d]=%d\n",i,num[i]);
        }
        if(num[i]>0)
        {
             printf("Array[%d]=%d\n",i,num[i]);
        }
        //printf("Array[%d]=%d\n",i,num[i]);
    }
    return 0;
}


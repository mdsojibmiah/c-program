/* Write a C program to read and print elements of array
using recurision */
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
    printf("\nElements in array are: \n");
    for(i=0;i<n;i++)
    {
        printf("Array[%d]=%d\n",i,num[i]);
    }
    return 0;
}

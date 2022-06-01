//Write a C program to find second largest element in an array.
#include<stdio.h>
int main()
{
    int num[20],n,i,max1,max2;
    printf("Enter the size of array =");
    scanf("%d",&n);

    printf("Input array elements= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max1 = max2 = num[0];
    for(i=1;i<n;i++)
    {
        if(max1<num[i])
        {
            max2 = max1;
            max1 = num[i];
        }
        else if(max2<num[i] && max1>num[i])
        {
            max2 = num[i];
        }
    }
    printf("First largest = %d\n", max1);
    printf("Second largest = %d\n", max2);
}

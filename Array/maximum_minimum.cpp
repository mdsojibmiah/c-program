//Write a C program to find maximum and minimum element in an array.
#include<stdio.h>
int main()
{
    int num[50],n,i,maximum,minimum;
    printf("How many numbers : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    maximum = num[0];
    minimum = num[0];
    for(i=1;i<n;i++)
    {
        if(maximum < num[i])
        {
            maximum = num[i];
        }
        if(minimum>num[i])
        {
            minimum = num[i];
        }
    }
    printf("Maximum =%d\n",maximum);
    printf("Minimum =%d\n",minimum);
    return 0;
}





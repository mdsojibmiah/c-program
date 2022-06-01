//Write a C program to find sum of all array elements.
#include<stdio.h>
int main()
{
    int num[10],n,i,sum=0;
    //Enter Array size
    printf("Enter size of array = ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Array[%d]=%d\n",i,num[i]);
        sum = sum + num[i];
    }
    printf("\nSum of array = %d\n",sum);

    return 0;
}






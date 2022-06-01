//Write a c Program to take N values from the user and store them in an array
//Write a c Program to find the sum of n numbers using arrays
//Write a c Program to find the average of n numbers using arrays
#include<stdio.h>
int main()
{
    int marks[20],n,i,sum=0;
    float average;
    printf("Enter the N intigers = ");
    scanf("%d",&n);
    //Taking input and storing it in an array
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Displaying integers Array:\n");
    //Printing element of an array
    for(i=0;i<n;i++)
    {
        printf("\nArray[%d]=%d",i,marks[i]);
        sum = sum + marks[i];
        average = sum / n;
    }
    printf("\nSum of Array=%d\n",sum);
    printf("\nSum of Average=%.2f\n",average);
    return 0;
}


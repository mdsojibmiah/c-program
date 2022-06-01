//Write a c Program to take 5 values from the user and store them in an array
//Write a c Program to find the sum of 5 numbers using arrays
//Write a c Program to find the average of 5 numbers using arrays
#include<stdio.h>
int main()
{
    int marks[5],i,sum=0;
    float average;
    printf("Enter the 5 intigers = \n");
    //Taking input and storing it in an array
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Displaying integers\n");
    //Printing element of an array
    for(i=0;i<5;i++)
    {
        printf("\nArray[%d]=%d",i,marks[i]);
        sum = sum + marks[i];
        average = sum / 5;
    }
    printf("\nSum of Array=%d",sum);
    printf("\nSum of Average=%.2f\n",average);
    return 0;
}

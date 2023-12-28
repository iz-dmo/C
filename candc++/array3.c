// how to insert data to the array using scanf
#include<stdio.h>
#define SIZE 10 // symbolic constant 
int main()
{
    int data[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        printf("Please enter %d's of data:",i);
        scanf("%d",&data[i]);
    }
    int total = 0;
    for (int ii = 0; ii < SIZE; ii++)
    {
        total+= data[ii];
    }
    printf("total value is %d:",total);
    
}
// counting frequency of array using srand()

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define DATA_SIZE 100  
#define FREE_SIZE 11
int main()
{
    int data[DATA_SIZE];
    int frequency[FREE_SIZE] = {0};
    time_t tm;
    srand(time(&tm));
    for ( int i = 0 ;i < DATA_SIZE; i ++ ){
        data[i] = (rand()%10)+1;

    }
    for (int ii = 0; ii < DATA_SIZE; ii++)
    {
        ++frequency[data[ii]];
    
    }
    for (int z = 1; z < FREE_SIZE; z++)
    {
        printf("%d\n",frequency[z]);
    }
    return 0;
    

}


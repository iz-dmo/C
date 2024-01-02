
// find largest in array
//  introduction algorithm
#include<stdio.h>


int main(){
    int element[100];
    int size;
    printf("Please enter element of the array (1-100)");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Please enter element %d",i);
        scanf("%d",&element[i]);
    }

    for (int i = 1; i < size; i++)
    {
        if(element[0] < element[i]){
            int temp = element[0];
            element[0] = element[i];
            element[i] = temp;
        }
    }

    printf("%d",element[0]);
    
    
}
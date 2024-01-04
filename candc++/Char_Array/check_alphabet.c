
#include<stdio.h>
int main(){
    char word;
    printf("Please enter a character:   ");
    scanf("%c",&word);
    if( (word >= 'A' && word <='Z')  || ( word >= 'a' && word <='z' )){
        printf("%c It is alphabet",word);
    }else{
        printf("%c it is not alphabet",word);
    }
    return 0;
}
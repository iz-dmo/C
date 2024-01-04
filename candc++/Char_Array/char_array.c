
/*
    non primitive
    - Array(collection of data items,same type)
    - String(c programming resprented by array of chrarcter)
    - Structure (collection of variable)

    note -/ we can use (scanf %s) but would terminate when meet with space
            set converstaion code ("%[^\n]",&arr) ; read a line containing white space
            gets(arr)

    Character Array // declaration and intialization array same type
                    a. char (sizeof)
                    b. char is a primitive data type
    - primitive
        /\
       /  \
    boolean Numerical data type
    Numerical data type -> [integral => character|integer]  [float point=> float| double]
    character=> char || integer=> byte, int, short, long   

*/

#include <stdio.h>
#define DMO 100

int main(){
    char arr[DMO];
    printf("Please enter your name :");
    gets(arr);
    printf("Hello %s",arr);
    return 0;
}

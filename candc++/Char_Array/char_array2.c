/*

strcmp => String Compare
syntax => (string1, string2) , - or +int //different : same 0
Return => identical equal () another +int or -int (depend on ascii value)
Note* => must declare <string.h>

*/ 

#include<stdio.h>
#include<string.h>

int main(){

    char uname[] = "Dmo";
    char pass[]  = "dmo123";
    char username[20];
    char password[20];
    printf("Please enter username:");
    gets(username);
    printf("\nPlease enter password:");
    gets(password);

    if( (strcmp(uname,username)) == 0 && (strcmp(pass,password)) == 0){
        printf("Login to my heart");
    }else{
        printf("get out here");
    }
    return 0;

}

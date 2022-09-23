#include <stdio.h>
#include <string.h>
int main(){
    char UserName[100];
    char Password[100];

    while(1){
 
    printf("Enter User Name:");
    gets(UserName);
    printf("Enter Password:");
    gets(Password);
    if(strcmp(UserName,"User")==0){
        if(strcmp(Password,"12345")==0){
            printf("LOGIN SUCCESS.\n");
            break;
        }
    }
    else{
        printf("Try Again!!\n");
    }
    }
    return 0;
}
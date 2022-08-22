#include <stdio.h>

int main()
{
    int a = 65;
    int i,j,n=3,space;
    for(i=1;i<=n;i++){
        for(space=i;space<n;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            
            printf("%c",a);
            a++; 
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<i){
                printf(" ");
            }
            else{
                printf("%c",a-1);
                 a--;
            }
        }
        printf("\n");
    }
return 0;    
}
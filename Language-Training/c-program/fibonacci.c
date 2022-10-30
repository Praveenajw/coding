// #include<stdio.h>
// int main(){
//    int t1=0,t2=1,next=0,n;
//    printf("enter a num:");
//    scanf("%d",&n) ;
// printf("fibonacci series:%d%d",t1,t2);
// next=t1+t2;
// while(next<=n){
//     printf("%d",next);
//     t1=t2;
//     t2=next;
//     next=t1+t2;
// }

// return 0;
// }


#include<stdio.h>
void main()
{
    int i,n,f1=-1,f2=1,f3;
    printf("enter the value");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        f3=f1+f2;
        printf("\n\n%d",f3);
        f1=f2;
        f2=f3;
    }
}
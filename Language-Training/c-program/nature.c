#include<stdio.h>

int main()

{

int n;

printf("Enter the value for n:\n");

scanf("%d",&n);

for(int i=0;i<=n;i++)

{

if(i%2 == 1)

printf("%d\n",i);

}

return 0;

}

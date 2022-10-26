#include <stdio.h>
int main(){
char str[20];
int i;
printf("Enter a String: "); 
scanf("%s", str);
for(i=0;str[i];i++); 
printf("Reverse Order: "); 
for(i=i-1;i>=0;i--) 
printf("%c",str[i]);
return 0;
}
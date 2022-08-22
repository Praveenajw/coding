#include <stdio.h>
int main()
{
    char arr1[100],arr2[100];
    int i=0,j=0;
    printf("enter a string:");
    gets(arr1);
    while(arr1[i]!='\0')
    {
        i++;
    }
    while(i>0)
    {
        arr2[j]=arr1[--i];
        ++j;
    }
    arr2[j]='\0';
    printf("reversed string:");
    for(i=0;arr2[i]!='\0';i++)
    {
        if(arr2[i+1]==' '|| arr2[i+1]=='\0')
        {
            for(j=i;j>=0 && arr2[j]!=' ';j--)
            {
                printf("%c",arr2[j]);
            }
            printf(" ");
        }
    }
    return 0;
}
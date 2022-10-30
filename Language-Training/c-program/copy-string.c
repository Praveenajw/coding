// #include <stdio.h>
// #include<string.h>a
// int main()
// {
//     char str[100], copystr[100];
//     int i=0;
//     printf("enter:");
//     scanf("%s",str);
//     while(str[i]!='\0')
//     {
//         copystr[i]=str[i];
//         i++;
//     }
//    copystr[i]='\0';
//    printf("copy word:%s",copystr);
//    return 0;
// }



#include <stdio.h>
int main()
{
  int i = 0;
  char str[1000], cpystr[1000] ;

  printf("Input a string to copy\n");
  gets(str);

  while (str[i] != '\0') {
    cpystr[i] = str[i];
    i++;
  }

 cpystr[i] = '\0';

  printf("After copying, the string: %s\n", cpystr);

  return 0;
}


// String copy C program

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char source[1000], destination[1000];

//   printf("Input a string\n");
//   gets(source);

//   strcpy(destination, source);

//   printf("Source string: %s\n", source);
//   printf("Destination string: %s\n", destination);

//   return 0;
// }
#include <stdio.h>
int main() {
  char s1[100] = "programming ", s2[] = "is awesome";
  int i, j;

  // store i of s1 in the i variable
  i = 0;
  while (s1[i] != '\0') {
    ++i;
  }

  // concatenate s2 to s1
 
  for (j = 0; s2[j] != '\0'; ++j, ++i) {
    s1[i] = s2[j];
  }

  // terminating the s1 string
  s1[i] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}
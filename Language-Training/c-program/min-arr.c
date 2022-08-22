
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[1000], i, n, min;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        
    }
    printf("minimum of array is : %d", min);
  

    return 0;
}
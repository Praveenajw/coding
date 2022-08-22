#include <stdio.h>
#include <conio.h>
void main()
{
int tam,eng,tot1,sci,mat,tot2;
printf("Enter tam value:");
scanf("%d",&tam);
printf("Enter eng value:");
scanf("%d",&eng);
tot1=tam+eng;
printf("total1:%d\n",tot1);

printf("Enter sci value:");
scanf("%d",&sci);
printf("Enter mat value:");
scanf("%d",&mat);
tot2=sci+mat;
printf("total2:%d\n",tot2);

if (tot1>tot2)
{
printf("total1 is greater");
}
else if (tot2>tot1)
{
printf("total2 is greater");
}
}
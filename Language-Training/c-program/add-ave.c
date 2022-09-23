#include<stdio.h>
int pour(int A, int B, int C)
{
  int move = 1, a = A, b = B;
  while (a != C && b != C)
  {
    a -= b;
    move++;
    if (a == C || b == C)
      break;
    if (a == 0)
    {
      a = A;
      move++;
    }
    if (b == B)
    {
      b = 0;
      move++;
    }
  }
  return move;
  }
int main()
{
    int t, a, b, c;
  scanf("%d", & t);
  while (t--)
  {
    scanf("%d%d%d", & a, & b, & c);
    if (c > a && c > b)
      printf("-1\n");  
    else if (c == a || c == b)
      printf("1\n");
    else
      printf("%d\n",pour(a, b, c));
  }
  return 0;
}

#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter First Number: ");
  scanf("%d", &a);
  printf("Enter Second Number: ");
  scanf("%d", &b);

  printf("\nBefore Swap\n");
  printf("\nFirst Number = %d\n", a);
  printf("Second Number = %d\n", b);

  a = a - b;
  b = a + b;
  a = b - a;

  printf("\nAfter Swap\n");
  printf("\nFirst Number = %d\n", a);
  printf("Second Number = %d", b);
}

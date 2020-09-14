#include <stdio.h>
#include <stdlib.h>

void swap()
{
  int num1, num2;
  printf("Enter your first number: ");
  scanf("%d", &num1);

  printf("Enter your first number: ");
  scanf("%d", &num2);

  printf("The swap of %d and %d is %d and %d", num1, num2, num2, num1);
}

int main()
{
    swap();

    return 0;
}

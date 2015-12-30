#include <stdio.h>

int main(void)
{
  char ch;
  int times;

  printf("Enter a character and a number: ");
  scanf("%c %d", &ch, &times);

  int indx;
  for(indx = 0; indx < times; indx++)
  {
    printf("%c ", ch);
  }
  putchar('\n');
  return 0;
}



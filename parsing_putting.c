#include <stdio.h>

int main(void)
{
  char input_char;
  int start_print;
  start_print = 0;
  printf("Enter some text, equal sign and an integer: "); 
   
  while ((input_char = getchar()) != '\n')
  {
    if (input_char == '=')
    {
      printf("The integer you entered is: ");
      start_print = 1;
      continue;
    }

    if (start_print == 1 && input_char != ' ')
    {
      putchar(input_char);
    }
  }
  putchar('\n');
  return 0;
}


// Author: Steven Li
// This program reads in the number of spaces, newline chars
// and all other chars before # which will make it exit

#include <stdio.h>
#include <string.h>

int main(void)
{
  char input_char;
  int num_spaces, num_nl_chars, num_chars; 
  num_spaces = num_nl_chars = num_chars = 0;

  printf("Start Typing\n");

  while((input_char = getchar()) != '#')
  {
    if (input_char == ' ')
      num_spaces++;
    else if (input_char == '\n')
      num_nl_chars++;
    else
      num_chars++;
  }

  printf("Number of spaces: %d\n", num_spaces);
  printf("Number of new lines: %d\n", num_nl_chars);
  printf("Number of other characters: %d\n", num_chars);

  return 0;
}


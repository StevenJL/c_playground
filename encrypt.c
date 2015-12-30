// Author: Steven Li
// This program is 'encrypts' messages 
// by removing spaces and replacing vowels
// with 'Z'. 

#include <stdio.h>
#include <stdbool.h>

bool is_vowel(char input_char);

int main(void)
{
  char input_char;

  printf("Start Typing\n");
  while((input_char = getchar()) != '.')
  {
    if (is_vowel(input_char))
      putchar('Z');
    else if (input_char != ' ')
      putchar(input_char);
  }

  return 0;
}

bool is_vowel(char input_char)
{
  bool output;
  switch(input_char)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      output = true;
      break;
    default:
      output = false;
  }
  return output;
}


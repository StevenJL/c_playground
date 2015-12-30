// Author: Steven Li
// This program prints a triangle of & symbols

#include <stdio.h>

int main(void)
{
  int outer; 
  int inner;

  for(outer = 1; outer <= 6; outer++)
  {
    for(inner = 1; inner <= outer; inner++)
    {
      printf("&"); 
    }
    printf("\n");
  }

  return 0;
}


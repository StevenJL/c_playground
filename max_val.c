#include <stdio.h>

void max_value(int * int1, int * int2);

int main()
{
  int int1, int2;

  printf("Enter two integers: ");
  scanf("%d %d", &int1, &int2);
  max_value(&int1, &int2);
  printf("Both values are now: %d, %d\n", int1, int2);
   
  return 0; 
}

void max_value(int * int1, int * int2)
{
  if (*int1 > *int2)
  {
    *int2 = *int1;
  } else {
    *int1 = *int2;
  }
}



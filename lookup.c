#include <stdio.h>

int lookup_num(int numbers[], int array_size, int num_to_find)
{
  int index, output;
  printf("array_size %d: num_to_find: %d\n", array_size, num_to_find);
  for (index = 0; index < array_size; index++)
  {
    printf("numbers[index] %d\n", numbers[index]);
    if (numbers[index] == num_to_find)
      output = 42;
  }
  return output;
}

int main(void)
{
  int numbers[9] = {3, 45, 657, 23, 45, 6867, 34, 1, 12}; 
  
  printf("%d", lookup_num(numbers, 8, 45));

  return 0;
}

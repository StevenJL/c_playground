#include <stdio.h>
#define MAXSIZE 100

void print_array(int numbers[], int array_size);
void print_array_reversed(int numbers[], int array_size);
int lookup_num(int numbers[], int array_size, int num_to_find);

int main(void)
{
  int input_num, array_size, input_status;
  int numbers[MAXSIZE];
  array_size = 0;

  printf("Enter the integers separated by newline character\n");
  printf("Enter 'd' when you're done submitting integers\n");
  while(1)
  {
    input_status = scanf("%d", &input_num);
    if (input_status != 1)
      break;

    numbers[array_size] = input_num; 
    array_size++;
  }

  printf("Here is the array in original form: ");
  print_array(numbers, array_size);

  printf("Here is the array in reversed order: ");
  print_array_reversed(numbers, array_size);

  printf("Here is the array in ascending order: ");
  int outer_index;
  int inner_index;
  int numbers_sorted[array_size];

  for(outer_index = 0; outer_index < array_size; outer_index++)
  {
    numbers_sorted[outer_index] = numbers[outer_index];
  }

  int temp;
  for(outer_index = 0; outer_index < array_size; outer_index++)
  {
    for (inner_index = 0; inner_index < (array_size - 1); inner_index++)
    {
      if(numbers_sorted[inner_index] > numbers_sorted[inner_index+1])
      {
        temp = numbers_sorted[inner_index];
        numbers_sorted[inner_index] = numbers_sorted[inner_index+1];
        numbers_sorted[inner_index+1] = temp;
      }
    }
  }

  print_array(numbers_sorted, array_size);

  getchar();
  int num_to_find;
  while(1)
  {
    printf("To see the index of a number in the array, enter a value \n");
    printf("Enter 'q' to quit \n");
    input_status = scanf("%d", &num_to_find);

    if(input_status != 1)
      break;
  
    printf("The integer %d is at index  %d\n", 
        num_to_find,
        lookup_num(numbers, array_size, num_to_find));
  }

  return 0;
}

void print_array(int numbers[], int array_size)
{
  int index;
  for(index = 0; index < array_size; index++)
  {
    printf("%d ", numbers[index]); 
  }
  printf("\n"); 
}

void print_array_reversed(int numbers[], int array_size)
{
  int index;
  for(index = array_size - 1; index >= 0 ; index--)
  {
    printf("%d ", numbers[index]); 
  }
  printf("\n"); 
}

int lookup_num(int numbers[], int array_size, int num_to_find)
{
  int index;
  for (index = 0; index < array_size; index++)
  {
    if (numbers[index] == num_to_find)
      return index;
  }
}


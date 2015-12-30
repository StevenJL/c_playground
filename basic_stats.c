#include <stdio.h>

int main(void)
{

  float sum, average, max, min;
  int read_status, input_num, count, first_input; 

  printf("Enter the student scores: \n");
  sum = 0;
  count = 0;
  first_input = 0;

  while(1)
  {
    scanf("%d", &input_num);
    if (getchar() == EOF)
      break;
    
    printf("You entered %d \n", input_num);

    if (input_num > max || count == 0)
      max = input_num;

    if ((input_num < min) || count == 0)
      min = input_num;

    sum = sum + input_num;
    count++;
  }

  printf("Average: %.2f \n", sum / count);
  printf("Max: %.2f \n", max);
  printf("Min: %.2f \n", min);

  return 0;
}



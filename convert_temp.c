#include <stdio.h>

int main(void)
{
  char user_selection;
  float input_value, output_value;

  printf("Please select a temperature conversion\n");
  printf("a. Celcius to Fahrenheit\n");
  printf("b. Fahrenheit to Celcius\n");
  printf("Your choice: ");
  scanf("%c", &user_selection);

  if (user_selection == 'a')
  {
    printf("Please Enter a celcius value: ");
  } else if (user_selection == 'b') {
    printf("Please Enter a Fahrenheit value: ");
  } 

  scanf("%f", &input_value);

  if (user_selection == 'a')
  {
    output_value = (input_value*(9/5.0)) + 32;
    printf("%f Celcius is %f Fahrenheit\n", input_value, output_value);
  } else if (user_selection == 'b') {
    output_value = (input_value - 32)*(5/9.0);
    printf("%f Fahrenheit is %f Celcius\n", input_value, output_value);
  } 
  
  return 0;
}



#include <stdio.h>

int main(void)
{
  int my_int; 
  float my_float; 
  double my_double;
  char my_char;

  my_int = 12;
  my_float = 3.142;
  my_double = 1.73217;
  my_char = 'x';

  char my_string[] = "Hello, C Programmer"; 

  int * my_int_ptr; 
  int ** special_int_ptr;
  float * my_float_ptr; 
  double * my_double_ptr;
  char * my_char_ptr;

  my_int_ptr = &my_int;
  my_float_ptr = &my_float;
  my_double_ptr = &my_double;
  my_char_ptr = &my_char;
  special_int_ptr = &my_int_ptr;

  printf("my_int\n");
  printf("The value of my_int: %d\n", my_int);
  printf("The address of my_int: %d\n", &my_int);
  printf("The address of my_int: %d\n", my_int_ptr);
  printf("The address of the pointer to my_int: %d \n", &my_int_ptr);
  printf("The value of my_int by dereferencing my_int_ptr: %d\n", *my_int_ptr);
  printf("\n");

  printf("special_int_ptr\n");
  printf("The value of special_int_ptr: %d\n", special_int_ptr);
  printf("The address of special_int_ptr: %d\n", &special_int_ptr);
  printf("The value of the pointer special_int_ptr is pointing to: %d\n", *special_int_ptr);
  printf("The value of the of the pointer of the pointer special_int_ptr is pointing to: %d\n", **special_int_ptr);
  printf("\n");

  printf("my_float\n");
  printf("The value of my_float: %f\n", my_float);
  printf("The address of my_float: %d\n", &my_float);
  printf("The address of my_float: %d\n", my_float_ptr);
  printf("The address of the pointer to my_float: %d \n", &my_float_ptr);
  printf("The value of my_float by dereferencing my_float_ptr: %f\n", *my_float_ptr);
  printf("\n");

  printf("my_double\n");
  printf("The value of my_double: %f\n", my_double);
  printf("The address of my_double: %d\n", &my_double);
  printf("The address of my_double: %d\n", my_double_ptr);
  printf("The address of the pointer to my_double: %d \n", &my_double_ptr);
  printf("The value of my_double by dereferencing my_double_ptr: %f\n", *my_double_ptr);
  printf("\n");

  printf("my_char\n");
  printf("The value of my_char: %c\n", my_char);
  printf("The address of my_char: %d\n", &my_char);
  printf("The address of my_char: %d\n", my_char_ptr);
  printf("The address of the pointer to my_char: %d \n", &my_char_ptr);
  printf("The value of my_char by dereferencing my_char_ptr: %c\n", *my_char_ptr);
  printf("\n");

  printf("my_string\n");
  printf("The value of my_string: %s\n", my_string);
  printf("The address of my_string: %d\n", &my_string[0]);
  printf("\n");

  return 0;
}



#include <stdio.h>

int main()
{
  long long1;
  long long2;
  int num_of_negs;
  num_of_negs = 0;

  printf("Enter two long values: ");
  scanf("%ld %ld", &long1, &long2);

  if (long1 < 0)
    num_of_negs++;
  if (long2 < 0)
    num_of_negs++;

  printf("Number of negative number entered %d\n", num_of_negs);
   
  return 0; 
}



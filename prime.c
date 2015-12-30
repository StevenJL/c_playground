// Author: Steven Li
// This program determines if a number is prime.
// Returns a factor if it is composite.

#include <stdio.h>
#include <stdbool.h>

int is_prime(int prime_candidate);

int main(void)
{
  int prime_candidate, result; 

  while(1)
  {
    printf("Enter an integer to be tested if it is prime (Enter -1 to quit):");
    scanf("%d", &prime_candidate); 

    if (prime_candidate == -1)
      break;

    result = is_prime(prime_candidate);
    if (result == -1)
      printf("%d is prime\n", prime_candidate);
    else
      printf("%d is factor of %d\n", result, prime_candidate);
  }

 return 0; 
}

int is_prime(int prime_candidate)
  // Returns -1 if its prime
  // Returns a factor if its composite
{
  int factor, index;
  factor = -1;
  index = 2;

  while((index*index) <= prime_candidate)
  {
    if ((prime_candidate % index) == 0)
    {
      factor = index; 
      break;
    }
    index++;
  }

  return factor;
}

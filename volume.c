// Author: Steven Li
// This program calculates the volume and surface area of a box

#include <stdio.h>

int main(void)
{
  float length, width, height;

  while(1)
  {
    printf("Please enter the length, width, and height as comma-delimited values\n");
    printf("For example: 12.5, 34.3, 100\n");
    
    scanf("%f, %f, %f", &length, &width, &height);
    if (length < 0 || width < 0 || height < 0)
      break;

    printf("The volumne is: %.3f\n", length*width*height);
    printf("The surface area is: %.3f\n", 2.0 *(length*width + length*height + height*width));
  }
  return 0;
}


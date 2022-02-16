/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{ float dis,amount;
  printf("Distance -> ");
  scanf("%f",&dis);

  if(dis > 30)
  {
    amount = 30 * 50 + (dis - 30)*40;
  }

  if(dis <= 30)
  {
    amount = 50 * dis;
  }
  
  printf("Amount = %.2f",amount);
  
  return 0;
}


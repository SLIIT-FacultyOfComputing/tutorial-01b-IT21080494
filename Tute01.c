/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int x,y,total;
  float average;

  printf("Enter number 1: ");
  scanf("%d", &x);

  printf("Enter number 2: ");
  scanf("%d", &y); 
  
  total=x+y;
  average=total/2.0;

  printf("Total: %d\n", total);
  printf("Average: %.2f\n", average);


  return 0;
}


/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1,sub2;  //declaring variables
  float avg;

  printf("Enter subject1 marks : ");  //taking keyboard inputs
  scanf("%d",&sub1);

  printf("Enter subject2 marks : ");
  scanf("%d",&sub2);

  avg = (sub1 + sub2)/2.0;

  printf("Average is %.2f ",avg); //display average

  
  return 0;
}


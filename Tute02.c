/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  int dist,amount;  //declaring variables

  printf("Enter the distance :"); //taking keyboard inputs
  scanf("%d",&dist);

  if (dist<=30) //cheak whether distance less than or equal 30
    amount = dist * 50;
  else
    amount = 30 * 50 +(dist-30)*40;

  printf("Amount = %d",amount); //display amount
  return 0;
}

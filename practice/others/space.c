// Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

// Write a space.c program that helps him keep track of his target weight by: It should ask him what his earth weight is. Ask him to enter a number for the planet he wants to fight on. It should then compute his weight on the destination planet.

// Compile and execute:

// gcc space.c
// ./a.out

// Copy to Clipboard

// Here is the table of conversion:

// #	Planet	Relative Gravity
// 1	Mercury	0.38
// 2	Venus	0.91
// 3	Mars	0.38
// 4	Jupiter	2.34
// 5	Saturn	1.06
// 6	Uranus	0.92
// 7	Neptune	1.19

#include <stdio.h>

int main() {
float weight;
int planetNum;
int result;
printf("Enter your weight on earth: ");
result = scanf("%f", &weight);
if (result != 1 || weight < 1) {
    printf("Invalid input!\n");
    return 1;
  }
printf("1. Mercury\n2. Venus\n3. Mars\n4. Jupiter\n5. Saturn\n6. Uranus\n7. Neptune\nEnter what planet you want to fight on: ");
result = scanf("%d", &planetNum);
if (result != 1 || planetNum < 1 || planetNum > 7) {
    printf("Invalid planet number!\n");
    return 1;
  }

switch(planetNum){
  case 1:
    printf("Your weight on Mercury is %.2f\n", weight*0.38);
    break;
  case 2:
    printf("Your weight on Venus is %.2f\n", weight*0.91);
    break;
  case 3:
    printf("Your weight on Mars is %.2f\n", weight*0.38);
    break;
  case 4:
    printf("Your weight on Jupiter is %.2f\n", weight*2.34);
    break;
  case 5:
    printf("Your weight on Saturn is %.2f\n", weight*1.06);
    break;
  case 6:
    printf("Your weight on Uranus is %.2f\n", weight*0.92);
    break;
  case 7:
    printf("Your weight on Neptune is %.2f\n", weight*1.19);
    break;
  }

  return 0;
}






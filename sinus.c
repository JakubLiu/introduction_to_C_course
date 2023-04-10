// while compiling you have to specify -lm, to reffer to the math.h library
// gcc sinus.c -lm

#include<stdio.h>
#include <math.h>
int main()
{
double number;
double sinus;
printf("Enter number between 0 and 1: ");
scanf("%lf", &number);
sinus = sin(number);
printf("The sine of %lf is %lf", number, sinus);
return 0;
}

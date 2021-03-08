// Program to test modified inputs

#include<stdio.h>

int main()
{
  int a, b, c, x, y, z, p, q, r;

  printf("Enter three integers:");
  scanf("%d%d%d", &a, &b, &c);
  printf("\na = %d, b = %d, c = %d", a, b, c);

  printf("\nEnter two 4 digit number:");
  scanf("%2d%4d", &x, &y);
  printf("\nx = %d, y = %d", x, y);
 
  printf("\nEnter two integers; ");
  scanf("%d%d", &a, &x);
  printf("\na = %d, x =  %d", a, x);

  printf("\nEnter a nine digit number: ");
  scanf("%3d%4d%3d", &p, &q, &r);
  printf("\np = %d, q = %d, r = %d", p, q, r);

  printf("\nEnter two three digit number: ");
  scanf("%d%d", &x, &y);
  printf("\nx = %d, y = %d", x, y);
}
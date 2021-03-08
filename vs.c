//Program to call by value & adders

#include<stdio.h>

void swap(int*c, int*d)
{
  int temp;
  temp =*c;
  *c = *d;
  *d = temp;
}

void main()
{
  int a, b;
  printf("\nEnter 2 values:");
  scanf("%d%d", &a, &b);

  printf("\nBefore swaping: %d %d", a, b);
  swap(a, b);
  printf("\nafter swaping: %d %d", a, b);

}
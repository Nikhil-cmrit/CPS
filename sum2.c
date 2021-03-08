//Program to add two numbers
//Without return type and without parameters

#include<stdio.h>

void sum();//Function prototype

int main()
{
   sum();//Function call
  
}

void sum()//Function definition
{
  int a, b;

  printf("\nEnter 2 values:");
  scanf("%d%d", &a, &b);

  printf("\nSum: %d", a+b);
}
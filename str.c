//Program to check formatted input for strings

#include<stdio.h> 

int main()
{
 int no;  
 char n1[50], n2[50], n3[50];

 printf("\nEnter no1 and name 1: ");
 scanf("%d%15c", &no, n1);
 printf("\nno = %d, n1 = %15s", no, n2);
 
 printf("\nEnter no2 and name 2: ");
 scanf("%d%s" , &no, n2);
 printf("\nno = %d, n2 = %15s", no, n2)

 printf("\nEnter no3 and name 3: ");
 scanf("%d%15s", &no, n3);
 printf("\nno = %d, n3 = %15s", no, n3);
 }
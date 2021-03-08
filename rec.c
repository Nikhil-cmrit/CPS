//Program to implement sum of array using recursion

#include<stdio.h>

int arraysum(int A[], int n);

int main()
{
  int n, i;

  printf("\nEnter array size:");
  scanf("%d", &n);

  int A[n];

  printf("\nEnter array elements:");
  for(i=0;i<n;i++)
    scanf("%d", &A[i]);

  printf("\nSum = %d", arraysum(A, n));

}

int arraysum(int A[], int n)
{
  if(n==0)
   return 0;
 
  else
   return A[n-1] + arraysum(A, n-1);
}
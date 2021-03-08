//Program to print Pascal's triangle

#include<stdio.h>

int main()
{
  int n, i, j, s, bin;

  printf("\nEnter rows: ");
  scanf("%d", &n);

  for(i=0;i<n;i++)
  {
    for(s=1; s<=n-i-1; s++)
     printf(" ");

    for(j=0; j<=i; j++)
    {
      if ((i==0) || (j==0))
       bin = 1;
    else
     bin = bin * (i - j + 1)/j;

    printf("%d",bin);
    }

    printf("\n");
  }
}
//Program to handle strings

#include<stdio.h>

int main()

{ 
  char s1[20], s2[20], s3[30];

  printf("\nEnter first string:");
  gets(s1);
  printf("\nEnter second string:");
  gets(s2);

  if(strcmp(s1,s2)!=0)
     strcat(s1,s2);
  
  strcpy(s3,s1);
  
  printf("\nStrings s1 = %s, length = %ld", s1, strlen(s1));
  printf("\nStrings s1 = %s, length = %ld", s2, strlen(s2));
  printf("\nStrings s1 = %s, length = %ld", s3, strlen(s3));
}
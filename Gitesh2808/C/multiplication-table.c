// Date : 15 Jan 2021

//C Program to print the Muliplication table of any integer..

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n, i;
  printf("Enter any number : \n");
  scanf("%d ", &n);
  
  for(i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d\n", n, i, n * i);
  }
  return 0;
}

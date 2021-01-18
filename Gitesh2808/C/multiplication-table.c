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

/*
Output :
  Enter any number : 
  2 * 1 = 2
  2 * 2 = 4
  2 * 3 = 6
  2 * 4 = 8
  2 * 5 = 10
  2 * 6 = 12
  2 * 7 = 14
  2 * 8 = 16
  2 * 9 = 18
  2 * 10 = 20
*/

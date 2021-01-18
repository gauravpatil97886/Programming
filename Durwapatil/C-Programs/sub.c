//Date : 13 Jan 2021

// C program to calculate the subtraction between two numbers..

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n1, n2, diff;
  
  printf("Enter two integers : \n");
  scanf("%d %d", &n1, &n2);
  
  diff = n1 - n2;
  
  printf("%d - %d = %d", n1, n2, diff);
  return 0;
}

/*
Output :

    Enter two integers : 
    8   2
    
    8 - 2 = 6
*/

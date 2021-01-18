//Date : 16 Jan 2021

/* 
if-else statement

There are four types of if statement in C language :-
1)  If statement
2)  If-else statement
3)  If else-if ladder
4)  Nested if

*/



// 1)  If statement :-



#include<stdio.h>
#include<stdlib.h>

int main()
{
  int no;
  printf("Enter any integer : \n");
  scanf("%d ", &no);
  
  if(no % 2 == 0)
  {
    printf("The given number %d is even.. ", no);
  }
  return 0;
}

/*
Output :
  Enter any integer : 
  12
  
  The given number 12 is even.. 
*/




// 2)  If-else statement :-



#include<stdio.h>
#include<stdlib.h>

int main()
{
  int no;
  printf("Enter any integer : \n");
  scanf("%d ", &no);
  
  if(no > 0)
  {
    printf("%d is positive number.. ");
  }
  else
  {
    printf("%d is negative number.. ");
  }
  return 0;
}

/*
Output :
  Enter any integer : 
  -15
  
  -15 is negative number..
*/




// 3)  If else-if ladder :-



#include<stdio.h>
#include<stdlib.h>

int main()
{
  int no;
  printf("Enter any integer : \n");
  scanf("%d ", &no);
  
  if(no > 0)
  {
    printf("Number is positive..");
  }
  else if(no < 0)
  {
    printf("Number is negative..");
  }
  else
  {
    printf("The entered number is zero..");
  }
  return 0;
}

/*
Output :
  Enter any integer : 
  0
  
  The entered number is zero..
*/




// 4)  Nested-if :-



#include<stdio.h>
int main()
{
  int no=1;
  if(no < 10)
  {
    if(no == 1)
    {
      printf("The value is : %d \n",no);
    }
    else
    {
      printf("The value is greater than 1");
    }
  }
  else
  {
    printf("The value is greater than 10");
  }
  return 0;
}

/*
Output :
  The value is  : 1
  
*/

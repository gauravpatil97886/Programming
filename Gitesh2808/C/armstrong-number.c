// Date : 21 Jan 2021

// C Program to check whether the number is armstrong number or not..


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int no, no1, a, b, c, rev;
    printf("Enter any three digit number : \n");
    scanf("%d ", &no);
    no1 = no;
    a = no % 10;
    no = no / 10;
    b = no % 10;
    no = no / 10;
    c = no;
    rev = (a * a * a) + (b * b * b) + (c * c * c);
    if(rev == no1)
    {
      printf("The given number is armstrong number");
    }
    else
    {
      printf("The given number is not armstrong number");
    }
    return 0;
}

/*
Output : 
    Enter any three digit number : 
    153
    
    The given number is armstrong number
*/

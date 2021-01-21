// Date : 21 Jan 2021

// C Program to check whether the number is palindrome or not..



#include <stdio.h>
#include <stdlib.h>
int main()
{
    int no, no1, a, b, c, d;
    printf("Enter any number : \n");
    scanf("%d ", &no);
    no1 = no;
    a = no % 10;
    no = no / 10;
    b = no % 10;
    no = no / 10;
    c = no;
    d = a * 100 + b * 10 + c;
    if(d == no1)
    {
      printf("Number is palindrome");
    }
    else
    {
      printf("Number is not palindrome");
    }
    return 0;
}

/*
Output : 
    Enter any number : 
    121
    
    Number is palindrome
*/

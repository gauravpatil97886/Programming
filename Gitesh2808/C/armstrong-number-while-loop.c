// Date : 23 Jan 2021

// C Program to check whether the number is armstrong number or not



#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int no, no1, sum = 0, a;
    printf("Enter any digit number : \n");
    scanf("%d", &no);
    no1 = no;
    while(no > 0)
    {
        a = no % 10;
        sum = sum + a * a * a;
        no = no / 10;
    }
    if(no1 == sum)
    {
        printf("Number is armstrong");
    }
    else
    {
        printf("Number is not armstrong");
    }
    return 0;
}

/*
Output : 
    Enter any digit : 
    153
    
    Number is armstrong
*/

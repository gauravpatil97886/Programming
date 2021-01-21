// Date : 21 Jan 2021

// C Program to calculate the simple interest



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, n, r;
    float si;
    printf("Enter the values of p, n and r : \n");
    scanf("%d %d %d", &p, &n, &r);
    si = (p * n * r) / 100;
    printf("The simple interest is %f",si);
    return 0;
}


/*
Output :
    Enter the values of p, n and r : 
    21000
    3
    2
    
    The simple interest is 1260.000000
*/

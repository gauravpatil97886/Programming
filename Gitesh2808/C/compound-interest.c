// Date : 25 Jan 2021 

// C program to calculate the compound interest



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float ci, p, R, r, x;
    printf("Enter the values of p, r and n : \n");
    scanf("%f %f %f", &p, &R, &r);
    x = 1 + (R / 100);
    ci = p * pow(x,r);
    printf("Compound interest is %f", ci);
    return 0;
}

/*
Output : 
    Enter the values of p, r and n : 
    1200
    2
    3
    
    Compound interest is 1273.449585
*/

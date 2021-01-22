// Date : 21 Jan 2021

// C Program to calculate the area of equilateral triangle..



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int side;
    float area;
    printf("Enter the value of side : \n");
    scanf("%d", &side);
    area = 0.433 * side * side;
    printf("The area of equilateral triangle is %f",area);
    return 0;
}


/*
Output :
    Enter the value of side : 
    6
    
    The area of equilateral triangle is 15.588000
*/

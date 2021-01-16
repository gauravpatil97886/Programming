// Date : 13 Jan 2021

//C Program to calculate the sum of two numbers

#include <stdio.h>
#include<stdlib.h>
int main() {    

    int num1, num2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // calculating sum
    sum = num1 + num2;      
    
    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}

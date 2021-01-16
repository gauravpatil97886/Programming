//Date : 15 Jan 2021

// C program to calculate the area and perimeter of the square..

#include<stdio.h>
#include<stdlib.h>

int main(){

   int side, area, per;
   
   printf("Enter the side of square :\n");
   scanf("%d", &side);
   
   area = side * side;
   printf("Area of Square is : ", area);
   
   per = 4 * side;
   printf("Perimeter of Square is : ", per);
   
   return 0;
}

/*
Output :

   Enter the side of square :
   12
   
   Area of Square is : 144
   
   Perimeter of Square is : 48
*/

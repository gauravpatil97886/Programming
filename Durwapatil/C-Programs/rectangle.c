//Date : 15 Jan 2021

#include<stdio.h>
#include<stdlib.h>

int main(){

   int side, area, per;
   
   printf("Enter the side of rectangle :\n");
   scanf("%d", &side);
   
   area = side * side;
   printf("Area of Rectangle is : ", area);
   
   per = 4 * side;
   printf("Perimeter of Rectangle is : ", per);
   
   return 0;
}

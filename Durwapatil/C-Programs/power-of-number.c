// Date : 22 Jan 2021

// C Program to calculate the power of a number



            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int x, y, z;
              printf("Enter the values of x and y : \n");
              scanf("%d %d", &x, &y);
              z = pow(x,y);
              printf("z is : %d", z);
              return 0;
            }

/*
Output : 
    Enter the values of x and y : 
    4
    3
    
    z is : 64
*/

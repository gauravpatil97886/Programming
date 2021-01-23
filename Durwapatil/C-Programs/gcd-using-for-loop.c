// Date : 23 Jan 2021

// C program to calculate the gcd



            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int n1, n2, min, i, gcd;
              printf("Enter the values of n1 and n2 : \n");
              scanf("%d %d", &n1, &n2);
              min = n1 < n2 ? n1 : n2;
              for(i = 1; i <= min; i++)
              {
                if(n1 % i == 0 && n2 % i == 0)
                {
                  gcd = i;
                }
              }
              printf("GCD of %d and %d is %d", n1, n2, gcd);
              return 0;
            }


/*
Output : 
    Enter the values of n1 and n2 : 
    95
    60
    
    GCD of 95 and 60 is 5
*/

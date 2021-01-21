// Date : 21 Jan 2021

// C Program to count the number of digits in a number..

            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int d, n, count = 0;
              printf("Enter any number : \n");
              scanf("%d ", &n);
              while(n > 0)
              {
                d = n % 10;
                n = n / 10;
                count++;
              }
              printf("No. of digits in the given number is %d",count);
              return 0;
            }

/*
Output :
    Enter any number : 
    48163
    
    No. of digits in the given number is 5
*/

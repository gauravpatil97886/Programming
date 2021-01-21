// Date : 21 Jan 2021

// C program to display the sum and percentage..

            #include <stdio.h>
            #include <stdlib.h>
            #include <math.h>
            
            int main()
            {
              int m1, m2, m3, m4, m5, sum;
              float per;
              printf("Enter the values of m1, m2, m3, m4, m5 : \n");
              scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
              
              sum = m1 + m2 + m3 + m4 + m5;
              printf("The sum is %d\n", sum);
              
              per = (sum * 100) / 500;
              printf("The percentage is %f\n", per);
              return 0;
            }

/*
Output :
    Enter the values of g1, g2, g3, g4, g5 : 
    85
    69
    94
    76
    81
    
    The sum is 405
    
    The percentage is 81.000000
*/

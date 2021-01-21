// Date : 21 Jan 2021

// C Program to display the sum and average..

            #include <stdio.h>
            #include <stdlib.h>
            
            int main()
            {
              int g1, g2, g3, g4, g5, sum, avg;
              printf("Enter the values of g1, g2, g3, g4, g5 \n");
              scanf("%d %d %d %d %d", &g1, &g2, &g3, &g4, &g5);
              
              sum = g1 + g2 + g3 + g4 + g5;
              printf("Sum is %d\n", sum);
              
              avg = sum / 5;
              printf("The average is %d", avg);
              return 0;
            }

/*
Output :
    Enter the values of g1, g2, g3, g4, g5 : 
    52
    63
    74
    85
    65
    
    Sum is 339
    Average is 67
*/

// Date : 20 Jan 2021

// C Program to display the multiplication of two arrays..

            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int a[3][3], b[3][3], c[3][3], i, j, k;
              printf("Enter the first matrix : \n");
              for(i = 0; i < 3; i++)
              {
                for(j = 0; j < 3; j++)
                {
                  scanf("%d ", &a[i][j]);
                }
                printf("\n");
              }
              printf("Enter the second matrix : \n");
              for(i = 0; i < 3; i++)
              {
                for(j = 0; j < 3; j++)
                {
                  scanf("%d ", &b[i][j]);
                }
                printf("\n");
              }
              printf("Multiplication of first and second matrix : \n");
              for(i = 0; i < 3; i++)
              {
                for(j = 0; j < 3; j++)
                {
                  c[i][j] = 0;
                  for(k = 0; k < 3; k++)
                  {
                    c[i][j] = c[i][j] + a[i][j] * b[i][j];
                  }
                }
              }
              for(i = 0; i < 3; i++)
              {
                for(j = 0; j < 3; j++)
                {
                  printf("%d\t", c[i][j]);
                }
                printf("\n\n");
              }
              return 0;
            }

/*
Output :
    Enter the first matrix : 
    1
    2
    3
    
    4
    5
    6
    
    7
    8
    9
    
    Enter the second matrix :
    1
    2
    3
    
    4
    5
    6
    
    7
    8
    9
    
    Mulptiplication of first and second matrix :
    3       12       27
    48      75       108
    147     192      243
*/

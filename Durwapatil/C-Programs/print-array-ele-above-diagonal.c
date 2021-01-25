// Date : 25 Jan 2021

// C program to print the array elements above the diagonal elements


            #include<stdio.h>
            #include<stdlib.h>
            int main()
            {
              int a[3][3], i, j, sum = 0;
              printf("Enter the array of matrix elements : \n");
              for(i = 0; i < 3; i++)
              {
                for(j = 0; j < 3; j++)
                {
                  scanf("%d", &a[i][j]);
                }
                printf("\n");
              }
              printf("Array of matrix : \n");
              for(i = 0; i < 3; i++)
              {
                for(j = 0; j < 3; j++)
                {
                  printf("%d\t", a[i][j]);
                }
                printf("\n\n");
              }
              printf("Array elements above diagonal matrix : \n\n");
              for(i = 0; i < 3; i++)
              {
                for(j = 0; j < 3; j++)
                {
                  if(i < j)
                  {
                    printf("%d\t", a[i][j]);
                  }
                  else
                  {
                    a[i][j] = 0;
                    printf("%d\t", a[i][j]);
                  }
                }
                printf("\n\n");
              }
              return 0;
            }

/*
Output : 
    Enter the array of matrix elements : 
    1
    2
    3
    
    4
    5
    6
    
    7
    8
    9
    
    Array of matrix : 
    1   2   3
    4   5   6 
    7   8   9
    
    Array elements above diagonal matrix : 
    0   2   3
    0   0   6
    0   0   0
*/

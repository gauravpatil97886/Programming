//  Date : 20 Jan 2021

//  C Program to display the transpose of a matrix..

            #include<stdio.h>
            #include<stdlib.h>
            
            int main()
            {
              int a[3][3], i, j;
              printf("Enter the matrix elements : \n");
              for(i = 0; i < 3; i++)
              {
                for(j = 0; j < 3; j++)
                {
                  scanf("%d ", &a[i][j]);
                }
                printf("\n");
              }
              
              printf("Matrix elements are : \n");
              for(i = 0; i < 3; i++)
              {
                for(j = 0; j < 3; j++)
                {
                  printf("%d \t", a[i][j]);;
                }
                printf("\n\n");
              }
              
              printf("Transpose of matrix is : \n");
              for(i = 0; i < 3; i++)
              {
                for(j = 0; j < 3; j++)
                {
                  printf("%d\t", a[j][i]);
                }
                printf("\n\n");
              }
              return 0;
            }

/*
Output : 
    Enter the matrix elements : 
    1
    2
    3
    
    4
    5
    6
    
    7
    8
    9
    
    Matrix elements are : 
    1       2       3
    4       5       6
    7       8       9
    
    Transpose of matrix is : 
    1       4       7
    2       5       8
    3       6       9
*/

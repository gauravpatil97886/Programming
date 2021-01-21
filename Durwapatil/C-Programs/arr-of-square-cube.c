// Date : 21 Jan 2021

// C program to display the square and cube of given data..

            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int a[20], i, n, sqr, cube;
              printf("Enter the size of array : \n");
              scanf("%d ", &n);
              printf("Enter the array elements : \n");
              for(i = 0; i < n; i++)
              {
                scanf("%d", &a[i]);
              }
              printf("\n\na[i]\t\tSQUARE\t\tCUBE\n");
              for(i = 0; i < n; i++)
              {
                sqr = a[i] * a[i];
                cube = sqr * a[i];
                printf("%d\t\t%d\t\t%d\n", a[i], sqr, cube);
              }
              return 0;
            }

/*
Output :
    Enter the size of array : 
    5
    
    Enter the array elements : 
    1
    2
    3
    4
    5
    
    a[i]          SQUARE          CUBE
    1             1               1
    2             4               8
    3             9               27
    4             16              64
    5             25              125
*/

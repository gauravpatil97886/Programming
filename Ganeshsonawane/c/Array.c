// Date : 25 Jan 2021

// Arrays in C language :- 

/*    Array is a collection of homogeneous data typesstored at contiguous memory locations. They are the derived data types in C language.    */

//  Example of 1-D array :-

            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int a[5],i;
              printf("Enter the array elements : \n");
              for(i = 0; i < 5; i++)
              {
                scanf("%d ", &a[i]);
              }
              printf("Array elements are : \n");
              for(i = 0; i < 5; i++)
              {
                printf("%d \n", a[i]);
              }
              return 0;
            }

/*
Output :
    Enter the array elements :
    1
    2
    3
    4
    5
    
    Array elements are : 
    1
    2
    3
    4
    5
*/




//  Example of 2-D array :-

            #include <stdio.h>
            #include <stdlib.h>
            
            int main()
            {
              int arr[3][3], i, j;     
              printf("Enter the array elements : \n", i, j);
              
              for(i = 0; i < 3; i++)    
              {    
                for(j = 0; j < 3; j++)    
                {    
                  scanf("%d",&arr[i][j]);    
                }    
              }
              
              printf("\nThe given array elements in matrix form...\n");     
              for(i = 0; i < 3; i++)    
              {    
                printf("\n");    
                for (j = 0; j < 3; j++)    
                {    
                  printf("%d\t", arr[i][j]);    
                }    
              }    
            }    

/*
Output :
    Enter the array elements : 
    1
    2
    3
    
    4
    5
    6
    
    7
    8
    9
    
    The given array elements in matrix form...
    1     2     3
    4     5     6
    7     8     9
*/

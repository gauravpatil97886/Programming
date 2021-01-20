// Date : 20 Jan 2021

// C Program to find the greatest element in the given array..

            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int a[5], i, max;
              printf("Enter the array elements : \n");
              for(i = 0; i < 5; i++)
              {
                scanf("%d ", &a[i]);
              }
              printf("Array elements are : \n");
              for(i = 0; i < 5; i++)
              {
                printf("%d\n ", a[i]);
              }
              max = a[0];
              for(i = 0; i < 5; i++)
              {
                if(max < a[i])
                {
                  max = a[i];
                }
              }
              printf("Greatest element is %d", max);
              return 0;
            }

/*
Output :
    Enter the array elements : 
    12
    41
    31
    75
    68
    
    Array elements are : 
    12
    41
    31
    75
    68
    
    Greatest element is 75
*/

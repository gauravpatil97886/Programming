// Date : 20 Jan 2021

// C Program for addition of two arrays :-

            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int a[5], b[5], c[5], i;
              printf("Enter the first array elements : \n");
              for(i = 0; i < 5; i++)
              {
                scanf("%d ", &a[i]);
              }
              printf("Enter the second array elements : \n");
              for(i = 0; i < 5; i++)
              {
                scanf("%d ", &b[i]);
              }
              printf("Addition : \n");
              for(i = 0; i < 5; i++)
              {
                c[i] = a[i] + b[i];
                printf("%d \n", c[i]);
              }
              return 0;
            }

/*
Output :
    Enter the first array elements : 
    1
    2
    3
    4
    5
    
    Enter the second array elements :
    1
    2
    3
    4
    5
    
    Addition : 
    2
    4
    6
    8
    10
*/

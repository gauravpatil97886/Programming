// Date : 21 Jan 2021

// C Program to search an element in given array..

            #include<stdio.h>
            #include<stdlib.h>
            
            int main()
            {
              int a[10], i, x, p = 0, f = 0;
              printf("Enter the array elements : \n");
              for(i = 0; i < 10; i++)
              {
                scanf("%d", &a[i]);
              }
              printf("Enter the find element : \n");
              scanf("%d ", &x);
              for(i = 0; i < 10; i++)
              {
                if(a[i] == x)
                {
                  f = 1;
                  p++;
                  printf("%d no. is present in array at position %d\n", x, i);
                }
              }
              if(f == 0)
              {
                printf("Not present in array");
              }
              else
              {
                printf("%d no. is present in array %d times", x, p);
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
    6
    7
    8
    9
    10
    
    Enter the find element : 
    5
    
    5 no. is present in array at position 4
    5 no. is present in array 1 times
*/

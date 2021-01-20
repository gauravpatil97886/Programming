// Date : 20 Jan 2021

// C Program to display the fibonacci series..

            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int a=0,b=1,c,n,i;
              printf("Enter the nth position : \n");
              scanf("%d",&n);
              printf("Fibonacci series is : \n");
              printf("%d %d ",a,b);
              for(i=1;i<=n;i++)
              {
                c=a+b;
                printf("%d ",c);
                a=b;
                b=c;
              }
              return 0;
            }

/*
Output :
    Enter the nth position : 
    5
    
    Fibonacci series is : 
    0   1   1   2   3   5   8
*/

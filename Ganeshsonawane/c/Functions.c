// Date : 25 Jan 2021

//Functions in C :-

/*
    Definition : 
        Functions are a block of code that performs a specific task.
    
*/    
    
//    Different aspects of function calling :-
    
//    1)  Function without argument and return value :
    
            #include<stdio.h>
            #include<Stdlib.h>
            void sum();
            void main()
            {
              sum();
            }
            void sum()
            {
              int a, b;
              
              printf("Enter two numbers : ");
              scanf("%d %d ", &a, &b);
              
              printf("Sum of two numbers is %d", a+b);
            }
            
/*
Output :
    Enter two numbers : 12
    41
    
    Sum of two numbers is 53
*/


//    2)  Function without argument and with return value :

            #include<stdio.h>
            #include<stdlib.h>
            
            int sum();
            void main()
            {
              float area = square();
              printf("The area of square is %f\n ", area);
            }
            int square()
            {
              float side;
              printf("Enter the length of the side in meters : \n");
              scanf("%f", &side);
              
              return side * side;
            }
            
/*
Output :
    Enter the length of the side in meters :
    12
    
    The area of square is 144.000000
*/


//    3)  Function with argument and without return value :

            #include<stdio.h>
            #include<stdlib.h>
            
            void sum(int, int);
            void main()
            {
              int a, b;
              printf("Enter two numbers :\n");
              scanf("%d %d", &a, &b);
              sum(a,b);
            }
            void sum(int a, int b)
            {
              printf("The sum is %d", a+b);
            }
            
/*
Output :
    Enter two numbers :
    20
    30
    
    The sum is 50
*/


//    4)  Function with argument and with return value :

            #include<stdio.h>
            #include<stdlib.h>
            
            int sum(int, int);
            void main()
            {
              int a, b, result;
              printf("Enter two numbers : \n");
              scanf("%d %d", &a, &b);
              
              result = sum(a, b);
              printf("The sum is %d", result);
            }
            int sum(int a, int b)
            {
              return a+b;
            }
            
/*
Output :
    Enter two numbers : 
    14
    32
    
    The sum is 46
*/

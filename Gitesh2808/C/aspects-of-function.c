// Date : 19 Jan 2021

// Functions :-

// Different aspects of function calling :-

// 1) Function without argument and return value :

        #include <stdio.h>
        #include <stdlib.h>
        
        void sum();  
        void main()  
        {  
          sum();  
        }  
        void sum()  
        {  
          int a,b;   
          printf("Enter two numbers : \n");
          scanf("%d %d", &a, &b);
          printf("The sum is %d ", a+b);
        }
        
/*
Output :
    Enter two numbers :
    11
    13
    
    The sum is 24
*/




// 2) Function without argument and with return value :

        #include <stdio.h>
        #include <stdlib.h>
        
        int sum();  
        void main()  
        {  
          float area = square();  
          printf("The area of the square : %f\n ", area);  
        }  
        int square()  
        {  
          float side;  
          printf("Enter the length of the side in meters : \n");  
          scanf("%f ", &side);  
          return side * side;  
        }
        
/*
Output :
    Enter the length of the side in meters : 
    8
    
    The area of the square : 64.000000
*/




// 3) Function with argument and without return value :

        #include <stdio.h>
        #include <stdlib.h>
        
        void sum(int, int);  
        void main()  
        {  
          int a,b,result;   
          printf("\nEnter two numbers : \n");  
          scanf("%d %d ", &a, &b);  
          
          sum(a,b);  
        }  
        void sum(int a, int b)  
        {  
          printf("\nThe sum is %d \n",a+b);      
        }  

/*
Output :
    Enter two numbers : 
    5
    9
    
    The sum is 14
*/




// 4) Function with argument and with return value :

        #include <stdio.h>
        #include <stdlib.h>
        
        int sum(int, int);  
        void main()  
        {  
          int a,b,result;   
          
          printf("Enter two numbers : \n");  
          scanf("%d %d",&a,&b);  
          
          result = sum(a,b);  
          printf("\nThe sum is : %d" , result);  
        }  
        int sum(int a, int b)  
        {  
          return a+b;  
        }
        
/*
Output :
    Enter two numbers : 
    27
    14
    
    The sum is : 41
*/

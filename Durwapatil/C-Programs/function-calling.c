// Date :18 Jan 2021

// Function : Call by Value :-

/*
    Example : Swapping of two numbers..
*/

        #include <stdio.h>
        #include <stdlib.h>
        int swap(int,int);
        int main()
        {
          int a,b;
          printf("\nEnter any two numbers : \n");
          scanf("%d%d",&a,&b);
          
          printf("\nEntered values are :\na=%d\tb=%d",a,b);
          swap(a,b);
          
          return 0;
        }
        int swap(int x,int y)
        {
          x=x+y;
          y=x-y;
          x=x-y;
          
          printf("\nInterchanged values are :\na=%d\tb=%d",x,y);
        }
        
/*
Output : 
    Enter any two numbers : 
    12
    10
    
    Entered values are :
    a=12    b=10
    Interchanged values are :
    a=10    b=12
*/




// Function : Call by Reference :-

/*
    Example : Swapping of two numbers..
*/

        #include <stdio.h>
        #include <stdlib.h>
        int swap(int*,int*);

        int main()
        {
          int a,b;
          printf("\nEnter the values of a,b\n");
          scanf("%d%d",&a,&b);
          swap(&a,&b);
          printf("Swapped no.s are \n%d\n%d",a,b);
          return 0;
        }
        int swap(int *x,int *y)
        {
          int t;
          t=*x;
          *x=*y;
          *y=t;
          return swap;
        }

/*
Output :
    Enter the values of a,b
    14
    18
    
    Swapped no.s are 
    18
    14
*/

// Date : 18 Jan 2021

// Storage Classes :-

// There are four types of storage classes in C Language and they are as follows with their respective examples :

/*
1)  Automatic :
*/

      #include<stdio.h>
      #include<stdlib.h>
      int main()
      {
        int a;    //auto
        char b;
        float c;
        printf("%d %c %f ", a, b, c);
        return 0;
      }

/*
Output :
    garbage  garbage  garbage
*/




/*
2)  Static :
*/

     #include <stdio.h>
     #include <stdlib.h>
     void display();
     
     int main()
     {
       display();
       display();
     }
     void display()
     {
       static int c = 1;
       c += 5;
       printf("%d  ",c);
     }

/*
Output :
    6  11
*/




/*
3)  Register :
*/

      #include <stdio.h>
      #include <stdlib.h>
      
      int main()  
      {  
        register int a;             // variable a is allocated memory in the CPU register. The initial default value of a is 0.   
        printf("%d",a);  
      }
      
/*
Output :
    0
*/




/*
4)  External :
*/

      #include <stdio.h>
      #include <stdlib.h>
      
      int main()  
      {
        extern int a;              // Compiler will search here for a variable a defined and initialized somewhere in the pogram or not.   
        printf("%d",a);
      }
      int a = 20;
      
/*
Output :
20
*/

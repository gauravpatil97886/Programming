// Date : 19 Jan 2021

// C Program to determine whether a number is palindrome or not :-

        #include <stdio.h>
        #include <stdlib.h>
        
        int main()
        {
          int no, no1, a, b, c, d;
          printf("Enter any number : \n");
          scanf("%d ", &no);
          
          no1 = no;
          a = no % 10;
          no = no / 10;
          b = no % 10;
          no = no / 10;
          c = no;
          
          d = a * 100 + b * 10 + c;
          if(d == no1)
          {
            printf("Number is Palindrome");
          }
          else
          {
            printf("Number is not Palindrome");
          }
          return 0;
        }

/*
Output :
    Enter any number : 
    121
    
    Number is Palindrome
*/




// C Program to determine whether a number is Armstrong number or not :-

        #include <stdio.h>
        #include <stdlib.h>
        
        int main()
        {
          int no, no1, a, b, c, rev;
          printf("Enter any three digit number : \n");
          scanf("%d ", &no);
          no1 = no;
          a = no % 10;
          no = no / 10;
          b = no % 10;
          no = no / 10;
          c = no;
          rev = (a * a * a) + (b * b * b) + (c * c * c);
          if(rev == no1)
          {
            printf("The given number is armstrong number");
          }
          else
          {
            printf("The given number is not armstrong number");
          }
          return 0;
        }

/*
Output :
    Enter any three digit number : 
    153
    
    The given number is armstrong number
*/

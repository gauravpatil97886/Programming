// Date : 22 Jan 2021

// C program to find the string length



            #include <stdio.h>
            #include <stdlib.h>
            #include <string.h>
            
            int main()
            {
              char name[20];
              int l;
              printf("Enter the string : ");
              scanf("%s ", name);
              l = strlen(name);
              printf("String length  : %d", l);
              return 0;
            }

/*
Output : 
    Enter the string : github
    
    String length : 6
*/

// Date : 22 Jan 2021 

// C Program to concatenate the strings



            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              char name1[20],name2[20];
              printf("Enter the first string : ");
              scanf("%s", name1);
              printf("Enter the second string : ");
              scanf("%s", name2);
              strcat(name1, name2);
              printf("Combined string : %s", name1);
              return 0;
            }


/*
Output :
    Enter the first string : git
    
    Enter the second string : hub
    
    Combined string : github
*/

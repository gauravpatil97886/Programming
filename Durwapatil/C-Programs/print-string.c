// Date : 22 Jan 2021 

// C Program to print the string 

            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              char name[6] = {'g','i','t','h','u','b'};
              int i;
              printf("String : ");
              for(i = 0; i < 6; i++)
              {
                printf("%c ", name[i]);
              }
              return 0;
            }

/*
Output :
    String : github
*/

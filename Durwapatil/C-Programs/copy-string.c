// Date : 22 Jan 2021

// C Program to copy one string to another 



            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              char name1[20], name2[20];
              int i;
              printf("Enter the name1 : ");
              scanf("%s ", name1);
              printf("\nNAME1 : %s\n", name1);
              for(i = 0; name1[i] != 0; i++)
              {
                name2[i] = name1[i];
              }
              name2[i] = '\0';
              printf("Copy the name1 into name2 : %s", name2);
              return 0;
            }

/*
Output : 
    Enter the name1 : github
    
    NAME1 : github
    
    Copy the name1 into name2 : github
*/

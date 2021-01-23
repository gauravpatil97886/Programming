// Date : 23 Jan 2021

// C program to display the increment operator



            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int x, i;
              i = 3;
              x = ++i * ++i * ++i;
              printf("x is %d\n", x);
              printf("i is %d", i);
              return 0;
            }

/*
Output : 
    x is 150
    i is 6
*/

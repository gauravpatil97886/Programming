// Date : 24 Jan 2021

// C program to print the squares between the given range


            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int n, srt;
              printf("Perfect square between 1 to 100 is \n");
              for(n = 1; n <= 100; n++)
              {
                srt = sqrt(n);
                if(srt * srt == n)
                {
                  printf("%d\n", n);
                }
              }
              return 0;
            }

/*
Output : 
    Perfect square between 1 to 100 is 
    1
    4
    9
    16
    25
    36
    49
    64
    81
    100
*/

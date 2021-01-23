// Date : 23 Jan 2021

// C Program to convert the temperature in seconds to hours, minutes and seconds



            #include<stdio.h>
            #include<stdlib.h>
            
            int main()
            {
              int sec, hrs, min;
              printf("Enter the time in seconds : \n");
              scanf("%d", &sec);
              hrs = sec / 3600;
              sec = sec % 3600;
              min = sec / 60;
              sec = sec % 60;
              printf("hrs = %d, min = %d, sec = %d ", hrs, min, sec);
              return 0;
            }


/*
Output : 
    Enter the time in seconds : 
    55761
    
    hrs = 15, min = 29, sec = 21
*/

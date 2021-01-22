// Date : 22 Jan 2021

// C Program to convert the temperature from degree to fahrenheit



            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              float degree, fahrenheit;
              printf("Enter the value of degree : \n");
              scanf("%f ", &degree);
              fahrenheit = (9 / 5) * degree + 32;
              printf("The temperature in fahrenheit is %f", fahrenheit);
              return 0;
            }

/*
Output : 
    Enter the value of degree : 
    0
    
    The temperature in fahrenheit is 32.000000
*/

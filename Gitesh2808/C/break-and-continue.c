// Date : 25 Jan 2021 

// C Program to demonstrate the execution of break and continue statement

// 1) Break statement :- 


#include<stdio.h>  
#include<stdlib.h> 

void main ()  
{  
    int i;  
    for(i = 0; i < 10; i++)  
    {  
        printf("%d ", i);  
        if(i == 5)
        {
          break;  
        }
    }  
    printf("Break statement executed and i = %d", i);  
    return 0;
}

/*
Output : 
    1
    2
    3
    4
    5
    Break statement executed and i = 5
*/



// 2) Continue Statement : 

#include<stdio.h>  
#include<stdlib.h>

int main()
{  
  int i = 1;
  for(i = 1; i <= 10; i++)
  {      
    if(i == 5)
    {
      continue;    
    }
    printf("%d \n", i);    
  }
  return 0;  
}

/*
Output : 
    1
    2
    3
    4
    5
    6
    7
    8
    9
    10
*/

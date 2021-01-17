// Date : 17 Jan 2021

/*
Break Statement :-

     Syntax :
         //loop or switch case..
         break;

*/

// C Program to demonstrate the break statement..

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i;
  
  for(i = 0; i < 10; i++)
  {
    printf("%d\n", i);
    
    if(i == 5){
      break;
    }
  }
  
  printf("Break statement executed and i = %d", i);
  return 0;
}


/*
Output :
    0
    1
    2
    3
    4
    5
    Break statement executed and i = 5
*/




/*
Continue Statement :-

    Syntax :
        //loop statements..
        continue;
        //some lines of code that are skipped..

*/

// C Program to demonstrate continue statement..

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i;
  for(i = 1; i <= 10; i++){
    if(i == 5){
      continue;
    }
    else{
      printf("%d\n ", i);
    }
  }
  return 0;
}


/*
Output :
    1
    2
    3
    4
    6
    7
    8
    9
    10
*/

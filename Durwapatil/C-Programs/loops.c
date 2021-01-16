// Date : 16 Jan 2021

/* Loops in C :-

There are three types of loops in C language :
1)  for loop
2)  while loop
3)  do-while loop
*/



/*
1)  for loop :-

    Syntax of for loop :
    
        for(initialization; condition; increment/decrement) {
            //code to be executed..
        }
    
    Example :
    
        C program to print the multiplication number of an integer..
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
  int no, i;
  printf("Enter any integer : \n");
  scanf("%d ", &no);
  
  for(i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d\n ", no, i, no * i);
  }
  return 0;
}

/*
Output : 
    Enter any integer :
    3 * 1 = 3
    3 * 2 = 6
    3 * 3 = 9
    3 * 4 = 12
    3 * 5 = 15
    3 * 6 = 18
    3 * 7 = 21
    3 * 8 = 24
    3 * 9 = 27
    3 * 10 = 30
*/




/*
2)  while loop :-

    Syntax of while loop :
    
        while(condition){
            //code to be executed..
        }
        
    Example :
    
        C program to print numbers form 1 to 10..
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
  int i = 1;
  
  while(i <= 10)
  {
    printf("%d\n", i);
    i++;
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
        

/*
3)  do-while loop :-

    Syntax of do-while loop :
    
        do{
            //code to be executed..
        }while(condition);
        
    Example :
        
        C program to print the table of given number..
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
  int no, i = 1;
  
  printf("Enter any integer : \n");
  scanf("%d ", &no);
  
  do{
    printf("%d * %d = %d\n", no, i, no * i);
    i++;
  }while(i <= 10);
  
  return 0;
}

/* 
Output :
    Enter any integer :
    5 * 1 = 5
    5 * 2 = 10
    5 * 3 = 15
    5 * 4 = 20
    5 * 5 = 25
    5 * 6 = 30
    5 * 7 = 35
    5 * 8 = 40
    5 * 9 = 45
    5 * 10 = 50
*/    

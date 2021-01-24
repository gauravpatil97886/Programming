## Date:23 jan,2020.

# The Switch statement:The switch statement in C is an alternate to if-else-if ladder statement which allows us to execute multiple operations for the different possibles values of a 
single variable called switch variable. Here, We can define various statements in the multiple cases for the different values of a single variable.

#include<stdio.h>  
int main(){    
int number=0;     
printf("enter a number:");    
scanf("%d",&number);    
switch(number){    
case 10:    
printf("number is equals to 10");    
break;    
case 50:    
printf("number is equal to 50");    
break;    
case 100:    
printf("number is equal to 100");    
break;    
default:    
printf("number is not equal to 10, 50 or 100");    
}    
return 0;  
}

## Output:
enter a number:4
number is not equal to 10, 50 or 100
enter a number:50
number is equal to 50


- Switch case example 2

#include <stdio.h>  
int main()  
{  
    int x = 10, y = 5;   
    switch(x>y && x+y>0)  
    {  
        case 1:   
        printf("hi");  
        break;   
        case 0:   
        printf("bye");  
        break;  
        default:   
        printf(" Hello bye ");  
    }   
          
}  
## Output:

hi	

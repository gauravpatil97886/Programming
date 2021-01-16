# Date: 16 jan,2020.

## The If statement:

Example 1:

#include<stdio.h>

int main()
{  
   int number=0;  
   printf("Enter a number:");  
   scanf("%d",&number);  
   if(number%2==0)
   {  
   printf("%d is even number",number);  
   }  
return 0;
}  

Example 2:

#include <stdio.h>  
int main()  
{  
    int a, b, c;   
     printf("Enter three numbers?");  
    scanf("%d %d %d",&a,&b,&c);  
    if(a>b && a>c)  
    {  
        printf("%d is largest",a);  
    }  
    if(b>a  && b > c)  
    {  
        printf("%d is largest",b);  
    }  
    if(c>a && c>b)  
    {  
        printf("%d is largest",c);  
    }  
    if(a == b && a == c)   
    {  
        printf("All are equal");   
    }  
}  


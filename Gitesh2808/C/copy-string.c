// Date : 25 Jan 2021 

// C program to copy one string to another string 


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name1[20],name2[20];
    printf("Enter the name1 :");
    scanf("%s",name1);
    printf("\nNAME1 :%s\n",name1);
    strcpy(name2,name1);
    printf("Copy the name1 into name2 :%s",name2);
    return 0;
}


/*
Output :
    Enter the name1 : github
    
    NAME1 : github
    
    Copy the name1 into name2 : github
*/

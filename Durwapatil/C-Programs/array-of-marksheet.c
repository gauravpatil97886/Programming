// Date : 21 Jan 2021

// C program to print the marksheet..

            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int rn[10], m1[10], m2[10], tot[10], n, i;
              float per[10];
              printf("Enter the array size : \n");
              scanf("%d ", &n);
              for(i = 0; i < n; i++)
              {
                printf("Enter the roll no, m1, m2 : \n");
                scanf("%d %d %d ", &rn[i], &m1[i], &m2[i]);
                tot[i] = m1[i] + m2[i];
                per[i] = tot[i] / 2.0;
              }
              printf("\n\t**********MARKSHEET OF DIPLOMA FIRST YEAR**********\n");
              printf("\n\nROLL NO\t\tMATHS\t\tENGLISH\t\tTOTAL\t\tPERCENTAGE\n\n\n");
              for(i = 0; i < n; i++)
              {
                printf("%d\t\t%d\t\t%d\t\t%d\t\t%.2f\n\n\n", rn[i], m1[i], m2[i], tot[i], per[i]);
              }
              return 0;
            }

/*
Output :
    Enter the array size : 
    2
    
    Enter the roll no, m1, m2 : 
    1
    85
    90
    
    Enter the roll no, m1, m2 : 
    2
    75
    67
    
              **********MARKSHEET OF DIPLOMA FIRST YEAR**********

ROLL NO           MATHS           ENGLISH           TOTAL           PERCENTAGE

1                 85              90                175             87.50

2                 75              67                142             71.00

*/

// Date : 19 Jan 2021

// Loops in C :-

// 1) for loop :

    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
      int no, count, sum = 0;
      printf("Enter a positive integer: \n");
      scanf("%d ", &no);

      for(count = 1; count <= no; ++count)
      {
        sum += count;
      }
      printf("Sum = %d ", sum);
      
      return 0;
    }
    
/*
Output :
  Enter a positive integer :
  10
  
  Sum = 55
*/




// 2) while loop :

    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
      int count=1;
      while (count <= 5)
      {
	      printf("%d ", count);
	      count++;
      }
      return 0;
    }
    
/*
Output :
  1   2   3   4   5
*/




//  3)  do-while loop :

      #include <stdio.h>
      #include <stdlib.h>
      
      int main()
      {
        int no, i = 1;
        
        printf("Enter any integer : \n");
        scanf("%d ", &no);
        
        do{
          printf("%d + %d = %d\n ", no, i, no * i);
          i++;
        }while(i <= 10);
        
        return 0;
      }
      
/*
Output :
  Enter any integer :
  2 * 1 = 2
  2 * 2 = 4
  2 * 3 = 6
  2 * 4 = 8
  2 * 5 = 10
  2 * 6 = 12
  2 * 7 = 14
  2 * 8 = 16
  2 * 9 = 18
  2 * 10 = 20
*/

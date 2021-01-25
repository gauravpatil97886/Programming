// Date : 24 Jan 2021 

// Java program to print array in matrix form



import java.io.*;
class atest8
{
  public static void main(String args[])
  {
    try
    {
      DataInputStream x = new DataInputStream(System.in);
      int a[][] = new int[3][3], r, c;
      System.out.print("\nEnter the numbers : \n");
      for(r = 0; r <= 2; r++)
      {
        for(c = 0; c <= 2; c++)
        {
          a[r][c] = Integer.parseInt(x.readLine());
        }
      }
      for(r = 0; r <= 2; r++)
      {
        for(c=0; c <= 2; c++)
        {
          System.out.print(" " + a[r][c]);
        }
        System.out.print("\n");
      }
    }
    catch(Exception e)
    {}
  }
}


/*
Output : 
    Enter the numbers : 
    1
    2
    3
    4
    5
    6
    7
    8
    9
    
    1   2   3
    4   5   6
    7   8   9
*/

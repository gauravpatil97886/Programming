// Date : 24 Jan 2021

// Java program to calculate the sum of array elements



import java.io.*;
class atest3
{
  public static void main(String args[])
  {
    try
    {
      DataInputStream x = new DataInputStream(System.in);
      int a[] = new int[5], i, sum = 0;
      System.out.print("\nEnter 5 numbers : \n");
      for(i = 0; i <= 4; i++)
      {
        a[i] = Integer.parseInt(x.readLine());
      }
      for(i = 0; i <= 4; i++)
      {
        sum = sum + a[i];
      }
      System.out.print("\nSum is "+ sum);
    }
    catch(Exception e)
    {}
  }
}

/*
Output : 
    Enter 5 numbers : 
    1
    2
    3
    4
    5
    
    Sum is 15
*/

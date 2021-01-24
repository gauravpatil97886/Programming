// Date : 24 Jan 2021 

// Java program to find the minimum element among the array elements



import java.io.*;
class atest6
{
  public static void main(String args[])
  {
    try
    {
      DataInputStream x = new DataInputStream(System.in);
      int a[] = new int[5], i, sum = 0, min = 0;
      System.out.print("\nEnter 5 numbers : \n");
      for(i = 0; i <= 4; i++)
      {
        a[i] = Integer.parseInt(x.readLine());
      }
      min = a[0];
      for(i = 0; i <= 4; i++)
      {
        if(a[i] < min)
        {
          min = a[i];
        }
      }
      System.out.print("\nMinimum is "+ min);
    }
    catch(Exception e)
    {}
  }
}

/*
Output : 
    Enter 5 numbers : 
    6
    4
    1
    2
    8
    
    Minimum is 1
*/

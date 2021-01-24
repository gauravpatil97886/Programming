// Date : 24 Jan 2021 

// Java program to find the maximum element in the array



import java.io.*;
class atest5
{
  public static void main(String args[])
  {
    try
    {
      DataInputStream x = new DataInputStream(System.in);
      int a[] = new int[5], i, sum = 0, max = 0;
      System.out.print("\nEnter 5 numbers : \n");
      for(i = 0; i <= 4; i++)
      {
        a[i] = Integer.parseInt(x.readLine());
      }
      for(i = 0; i <= 4; i++)
      {
        if(a[i] > max)
        {
          max = a[i];
        }
      }
      System.out.print("\nMaximum is "+ max);
    }
    catch(Exception e)
    {}
  }
}

/*
Output : 
    Enter 5 numbers : 
    5
    1
    4
    6
    2
    
    Maximum is 6
*/

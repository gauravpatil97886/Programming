// Date : 24 Jan 2021 

// Java program to check whether the number is prime or not 



import java.io.*;
class prime
{
  public static void main(String args[])
  {
    try
    {
      DataInputStream x = new DataInputStream(System.in);
      int no, i = 1, c = 0;
      System.out.print("\n Enter any number : \n");
      no = Integer.parseInt(x.readLine());
      while(i <= no)
      {
        if(no % i == 0)
        {
          c = c + 1;
        }
        i = i + 1;
      }
      if(c == 2)
      {
        System.out.print("\nPrime number ");
      }
      else
      {
        System.out.print("\nNot a Prime number ");
      }
    }
    catch(Exception e)
    {}
  }
}

/*
Output : 
    Enter any number : 
    7
    
    Prime number
*/

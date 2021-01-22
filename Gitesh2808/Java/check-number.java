// Date : 22 Jan 2021 

// Java program to check whether the number is positive or negative



import java.io.*;
class number
{
  public static void main(String args[])
  {
    try 
    {
      DataInputStream x = new DataInputStream(System.in);
      int a;
      System.out.print("\n Enter any number : ");
      a = Integer.parseInt(x.readLine());
      if(a > 0)
      {
        System.out.print("\n a is positive ");
      }
      else
      {
        System.out.print("\n a is negative ");
      }
    }
    catch(Exception e)
    {}
  }
}

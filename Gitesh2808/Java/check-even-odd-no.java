// Date : 22 Jan 2021

// Java program to check whether the number is even or odd



import java.io.*;
class even
{
  public static void main(String args[])
  {
    try 
    {
      DataInputStream x = new DataInputStream(System.in);
      int a;
      System.out.print("\n Enter any number : ");
      a = Integer.parseInt(x.readLine());
      if(a % 2 == 0)
      {
        System.out.print("\n a is even number ");
      }
      else
      {
        System.out.print("\n a is odd number "); 
      }
    }
    catch(Exception e)
    {}
  }
}

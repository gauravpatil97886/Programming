// Date : 22 Jan 2021 

// Java program to calculate the factorial of the given number



import java.io.*;
class fact
{
  public static void main(String args[])
  {
    try
    {
      DataInputStream x = new DataInputStream(System.in);
      int no, i = 1, f = 1;
      System.out.print("\n Enter number : ");
      no = Integer.parseInt(x.readLine());
      while(i <= no)
      {
        f = f * i;
        i = i + 1;
      }
      System.out.print("\nFactorial is "+ f);
    }
    catch(Exception e)
    {}
  }
}

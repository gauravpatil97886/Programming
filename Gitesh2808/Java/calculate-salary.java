// Date : 22 Jan 2021

// Java program to calculate the salary


import java.io.*;
class salary
{
  public static void main(String args[])
  {
    try
    {
      DataInputStream x=new DataInputStream(System.in);
      double s, t, d, h; 
      System.out.print("\n Enter salary : ");
      s = Double.parseDouble(x.readLine());
      d = 0.37 * s;
      h = 0.12 * s;
      t = d + h + s;
      System.out.print("\n D.A. is "+ d);
      System.out.print("\n H.R.A. is "+ h);
      System.out.print("\n Total Salary is "+ t);
    }
    catch(Exception e)
    {}
  }
}

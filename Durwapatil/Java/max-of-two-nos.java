// Date : 26 Jan 2021

// Java program to find the maximum of two numbers..



            import java.io.*;
            class max
            {
              public static void main(String args[])
              {
                try
                {
                  DataInputStream x = new DataInputStream(System.in);
                  int a, b;
                  System.out.print("Enter two numbers : \n");
                  a = Integer.parseInt(x.readLine());
                  b = Integer.parseInt(x.readLine());
                  if(a > b)
                  {
                    System.out.print("\n a is maximum");
                  }
                  else
                  {
                    System.out.print("\n b is maximum");
                  }
                }
                catch(Exception e)
                {}
              }
            }


/*
Output : 
    Enter two numbers : 
    5
    9
    
    b is maximum
*/

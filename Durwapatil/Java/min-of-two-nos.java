// Date :  26 Jan 2021

// Java program to find the minimum of two numbers 



            import java.io.*;
            class min
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
                  if(a < b)
                  {
                    System.out.print("\n a is minimum ");
                  }
                  else
                  {
                    System.out.print("\n b is minimum ");
                  }
                }
                catch(Exception e)
                {}
              }
            }


/*
Output : 
    Enter two numbers : 
    4
    12
    
    a is minimum
*/

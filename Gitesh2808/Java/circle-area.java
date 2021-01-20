// Date : 20 Jan 2021

// Java program to display the area of circle

            import java.io.*;
            class circle
            {
              public static void main(String args[])
              {
                try 
                {
                  DataInputStream x=new DataInputStream(System.in);
                  int r;
                  float ac; 
                  System.out.print("\nEnter radius : \n");
                  r = Integer.parseInt(x.readLine());
                  ac = (float)3.14 * r * r;
                  System.out.print("\nThe area of the circle is "+ ac);
                }
                catch(Exception e)
                {}
              }
            }

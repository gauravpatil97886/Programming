// Date : 20 Jan 2021

// Java program to display the area of rectangle

            import java.io.*;
            class rect
            {
              public static void main(String args[])
              {
                try
                {
                  DataInputStream x=new DataInputStream(System.in);
                  int l, b;
                  float ar;
                  System.out.print("\nEnter l and b : \n");
                  l=Integer.parseInt(x.readLine());
                  b=Integer.parseInt(x.readLine());
                  ar = l * b;
                  System.out.print("\nThe area of rectangle is "+ ar);
                }
                catch(Exception e)
                {}
              }
            }

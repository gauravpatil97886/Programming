// Date : 20 Jan 2021

// Java program to display the simple interest

            import java.io.*;
            class si
            {
              public static void main(String args[])
              {
                try 
                {
                  DataInputStream x=new DataInputStream(System.in);
                  int p, n, r;
                  float si;
                  System.out.print("\nEnter p, n, r : \n");
                  p = Integer.parseInt(x.readLine());
                  n = Integer.parseInt(x.readLine());
                  r = Integer.parseInt(x.readLine());
                  si = (p * n * r) / 100;
                  System.out.print("\nSimple Interest is : " + si);
                }
                catch(Exception e)
                {}
              }
            }

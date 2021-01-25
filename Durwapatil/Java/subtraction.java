// Date : 25 Jan 2021

// Java program to display the subtraction of two numbers



            import java.io.*;
            class subt
            {
              public static void main(String args[])
              { 
                try
                { 
                  DataInputStream x = new DataInputStream(System.in);
                  int a, b, c;
                  System.out.print("Enter two numbers : \n");
                  a = Integer.parseInt(x.readLine());
                  b = Integer.parseInt(x.readLine());
                  c = a - b;
                  System.out.print("\nThe subtraction is  "+ c);
                }
                catch(Exception e)
                {}
              }
            }
            
/*
Output : 
    Enter two numbers : 
    9
    2
    
    The subtraction is 7
*/

// Date : 25 Jan 2021 

// Java program to display the addition of two numbers


            import java.io.*;
            class add
            {
              public static void main(String args[])
              {
                try
                {
                  DataInputStream x = new DataInputStream(System.in);
                  int a, b, c;
                  System.out.print("Enter 2 numbers : \n");
                  a = Integer.parseInt(x.readLine());
                  b = Integer.parseInt(x.readLine());
                  c = a + b;
                  System.out.print("\nThe addition is  "+ c);
                }
                catch(Exception e)
                {}
              }
            }
            
/*
Output : 
    Enter two numbers : 
    5
    3
    
    The addition is 8
*/

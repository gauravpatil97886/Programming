// Date : 26 Jan 2021

// Java program to calculate the area of circle



            import java.io.*;
            class rect
            {
              public static void main(String args[])
              {
                try
                {
                  DataInputStream x = new DataInputStream(System.in);
                  int l, b;
                  float ar;
                  System.out.print("Enter l and b : \n");
                  l = Integer.parseInt(x.readLine());
                  b = Integer.parseInt(x.readLine());
                  ar = l * b;
                  System.out.print("\nThe area of rectangle is "+ ar);
                } 
                catch(Exception e)
                {}
              }
            }
            
/*
Output : 
    Enter l and b : 
    3
    5
        
    The area of the rectangle is 15
*/

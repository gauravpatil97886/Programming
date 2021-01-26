// Date : 26 Jan 2021 

// Java program to display the swapping of two numbers..



            class swap
            {
              public static void main(String args[])
              {
                int a, b, c;
                a = 10;
                b = 20;
                System.out.print("Numbers before swapping are : " + a + "  ");
                System.out.print(b + "\n");
                c = a;
                a = b;
                b = c;
                System.out.print("Numbers after swapping are : " + a + "  ");
                System.out.print(b);
              }
            }


/*
Output : 
    Numbers before swapping are : 10  20
    
    Numbers after swapping are : 20  10
*/

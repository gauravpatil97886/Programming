import java.io.*;
class stest
{
  public static void main(String args[])
  {
    try
    {
      DataInputStream x=new DataInputStream(System.in);
      int no;
      System.out.print("\nEnter any number :");
      no=Integer.parseInt(x.readLine());
      switch(no)
      {
        case 0 : System.out.print("Zero");break;
        case 1 : System.out.print("One");break;
        case 2 : System.out.print("Two");break;
        case 3 : System.out.print("Three");break;
        case 4 : System.out.print("Four");break;
        case 5 : System.out.print("Five");break;
        case 6 : System.out.print("Six");break;
        case 7 : System.out.print("Seven");break;
        case 8 : System.out.print("Eight");break;
        case 9 : System.out.print("Nine");break;
        default : System.out.print("Invalid number");break;
      }
    }
    catch(Exception e)
    {}
  }
}

/*
Output : 
    Enter any number :2
    
    Two
*/

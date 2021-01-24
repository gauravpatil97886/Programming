// Date : 24 Jan 2021 

// Java program to search the element in the array



import java.io.*;
class atest7
{
  public static void main(String args[])
  {
    try
    {
      DataInputStream x = new DataInputStream(System.in);
      int a[] = new int[5], i, ser;
      System.out.print("\nEnter 5 numbers : \n");
      for(i = 0; i <= 4; i++)
      {
        a[i] = Integer.parseInt(x.readLine());
      }
      System.out.print("\n Enter the search number : \n");
      ser = Integer.parseInt(x.readLine());
      for(i = 0; i <= 4; i++)
      {
        if(a[i] == ser)
        {
          System.out.print("\nNumber is present ");
          break;
        }
      }
      if(i == 5)
      {
        System.out.print("\nNumber is not present ");
      }
    }
    catch(Exception e)
    {}
  }
}


/*
Output : 
Enter 5 numbers : 
1
2
3
4
5

Enter the search number : 
3

Number is present
*/

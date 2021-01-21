# first program first.java
class first
{
public static void main(String args[])
{
System.out.print("welcome to my github profile");
}
}

## second program add.java
class add
{
public static void main(String args[])
{
int a,b,c;
  a=10;
  b=20;
  c=a+b;
  System.out.print("add is ",c);
}
}

## third program sub.java
class add
{
public static void main(String args[])
{
int a,b,c;
  a=10;
  b=20;
  c=b-a;
  System.out.print("sub is ",c);
}
}

## swap using third variable swap.java
class swap
{
public static void main(String args[])
{
int a,b,c;
  a=10;
  b=20;
  c=a;
  a=b;
  b=c;
  System.out.print(a);
  System.out.print(b);
}
}

## swap without using third variable
class swap
{
  public static void main(String args[])
  {
    int a,b,c;
    a=10;
    b=20;
    a=a+b;     //a=a*b;
    b=a-b;     //b=a/b;
    a=a-b;     //a=a/b;
    System.out.print(a);
    System.out.print(b);
  }
}

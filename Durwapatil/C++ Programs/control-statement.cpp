//  Date : 19 Jan 2021

//  Control Statements :-

//  1) if statement :

          #include <iostream.h>
          using namespace std;
   
          int main()
          {
            int no;
            cout << "Enter any integer : \n";
            cin >> no;
            if (no % 2 == 0)
            {
              cout << "It is even number";
            }
            return 0;
          }

/*
Output :
    Enter any integer : 
    12
    
    It is even number
*/




//  2)  if-else statement :

          #include <iostream.h>
          using namespace std;

          int main()
          {
            int no ;
            cout << "Enter any integer : \n";
            cin >> no;
            if (no % 2 == 0)
            {
              cout<<"It is even number";
            }
            else
            { 
              cout<<"It is odd number";
            }
            return 0;
          }

/*
Output : 
    Enter any integer : 
    13
    
    It is odd number
*/




//  3)  if-else-if ladder :

          #include <iostream>
          using namespace std;
          int main () 
          {
            int num;
            cout << "Enter a number to check grade : ";
            cin >> num;
            if(num < 0 || num > 100)
            {
              cout << "wrong number";
            }
            else if(num >= 0 && num < 50)
            {
              cout << "Fail";
            }
            else if(num >= 50 && num < 60)
            {
              cout << "D Grade";
            }
            else if(num >= 60 && num < 70)
            {
              cout << "C Grade";
            }    
            else if(num >= 70 && num < 80)
            {
              cout << "B Grade";
            }
            else if(num >= 80 && num < 90)
            {
              cout << "A Grade";
            }
            else if(num >= 90 && num <= 100)
            {
              cout << "A+ Grade";
            }
          }

/*
Output :
    Enter a number to check grade : 66
    C Grade
*/

// Date : 19 Jan 2021

// Break and Continue Statements :-

//  1)  break statement :

            #include <iostream>
            using namespace std;
            
            int main() 
            {
              for (int i = 1; i <= 10; i++)
              {
                if (i == 5)
                {
                  break;
                }
                cout << i << "\n";
              }
            }
            
/*
Output :
    1
    2
    3
    4
*/




//  2)  continue statement :

            #include <iostream>
            using namespace std;

            int main()
            {
              for(int i = 1; i <= 10; i++)
              {
                if(i==5)
                {
                  continue;
                }
                cout << i << "\n";
              }
            }
            
/*
Output :
    1
    2
    3
    4
    6
    7
    8
    9
    10
*/

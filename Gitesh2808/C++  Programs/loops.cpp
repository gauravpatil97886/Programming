// Date : 19 Jan 2021

//  Control Statements :-

//  Loops in C++ Language :

//  1)  for loop :

            #include <iostream>
            using namespace std;

            int main() 
            {
              int num, sum;
              sum = 0;

              cout << "Enter a positive integer : \n";
              cin >> num;

              for (int count = 1; count <= num; ++count) {
              sum += count;
            }
            cout << "Sum = " << sum << endl;
            return 0;
          }
          
/*
Output :
    Enter a positive integer : 
    10
    
    Sum = 55
*/




//  2)  while loop :

              #include <iostream>
              using namespace std;

              int main() 
              {
                int i = 1; 
                while (i <= 5) {
                cout << i << " ";
                ++i;
              }
              return 0;
}

/*
Output :
    1   2   3   4   5
*/




//  3)  do-while loop :

                  #include <iostream>  
                  using namespace std;  
                 
                  int main()
                  {  
                    int i = 1;    
                    do {    
                      cout<<i<<"\n";    
                      i++;    
                    } while (i <= 10);
                  }
                  
/*
Output :
    1
    2
    3
    4
    5
    6
    7
    8
    9
    10
*/

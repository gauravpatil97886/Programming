// Date : 24 Jan 2021

// CPP program to display the addition of two numbers in CPP



            #include <iostream>
            using namespace std;

            class ab
            {
              private : int a,b,c;
              public : int add();
            };
            int ab::add()
            {
              cout << "Enter two numbers : \n";
              cin >> a >> b;
              c = a + b;
              cout << "Sum : " << c;
            }
            int main()
            {
              ab st;
              st.add();
            }



/*
Output : 
    Enter two numbers : 
    23
    52
    
    Sum : 75
*/

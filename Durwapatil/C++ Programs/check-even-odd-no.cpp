// Date : 24 Jan 2021

// CPP program to check whether the number is even or odd 



#include <iostream>
using namespace std;

class ab
{
    int a;
    public : int no();
};
int ab :: no()
{
    cout << "Enter any number : \n";
    cin >> a;
    if(a % 2 == 0)
    {
        cout << "Number is even";
    }
    else
    {
        cout << "Number is odd";
    }
}
int main()
{
    ab st;
    st.no();
}



/*
Output : 
    Enter any number : 
    21
    
    Number is odd
*/

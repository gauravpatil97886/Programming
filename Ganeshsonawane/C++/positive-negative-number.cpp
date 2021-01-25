// Date : 25 Jan 2021

// CPP program to check whether the number is positive or negative



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
    if(a > 0)
    {
        cout << "Number is positive";
    }
    else if(a < 0)
    {
        cout << "Number is negative";
    }
    else
    {
        cout << "Number is zero";
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
    5
    
    Number is positive
*/

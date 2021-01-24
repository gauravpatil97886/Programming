// Date : 24 Jan 2021

// CPP program to display the largest number of two numbers



#include <iostream>
using namespace std;

class ab
{
    private : int a, b, c;
    public : int large();
};
int ab :: large()
{
    cout << "Enter two numbers : \n";
    cin >> a >> b;
    if(a > b)
    {
        cout << "Largest number : " << a;
    }
    else
    {
        cout <<  "Largest number : " << b;
    }
}
int main()
{
    ab st;
    st.large();
}


/*
Output : 
    Enter two numbers : 
    12
    49
    
    Largest number : 49
*/

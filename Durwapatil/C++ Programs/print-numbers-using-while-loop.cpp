// Date : 24 Jan 2021

// CPP program to print numbers form 1-10 using while loop 



#include <iostream>
using namespace std;

class ab
{
    int a;
    public : int no();
};
int ab :: no()
{
    a = 1;
    while(a <= 10)
    {
        cout << a << "\n";
        a++;
    }
}
int main()
{
    ab st;
    st.no();
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

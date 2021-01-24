// Date : 24 Jan 2021 

// CPP progam to display the GCD of two numbers



#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter two numbers : \n";
    cin >> n1 >> n2;
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    cout << "HCF = " << n1;
    return 0;
}


/*
Output : 
    Enter two numbers : 
    12
    32
    
    HCF = 4
*/

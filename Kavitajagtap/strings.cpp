
/*
we have given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

input :
abcd
ef

Output :
4 2
abcdef
ebcd af

*/

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s1,s2,s3;
    char b,a;
    int slen1,slen2;
     cin>>s1;
     cin>>s2;
     
    slen1 = s1.size();
    slen2 = s2.size();
    cout<<slen1;
    cout<<" "<<slen2;
    
    s3 = s1+s2;
    cout<<"\n"<<s3;
    
    a = s2[0];
    b = s1[0];        
    s1[0] = a;
    s2[0] = b;
    
    cout<<"\n";
    cout<<s1;
    cout<<" "<<s2;
    return 0;
}

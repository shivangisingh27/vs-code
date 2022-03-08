#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
int a=2,b=34,c=546,d=5678;
cout<<"the value of a without setw="<<a<<endl;
cout<<"the value of b without setw="<<b<<endl;
cout<<"the value of c without setw="<<c<<endl;
cout<<"the value of d without setw="<<d<<endl;

//manipulators
cout<<"the value of a with setw="<<setw(4)<<a<<endl;
cout<<"the value of b with setw="<<setw(4)<<b<<endl;
cout<<"the value of c with setw="<<setw(4)<<c<<endl;
cout<<"the value of d with setw="<<setw(7)<<d<<endl;

// operator precedence 
    
    return 0;
}
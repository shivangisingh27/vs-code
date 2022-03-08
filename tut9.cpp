#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    // selection control structure:switch case statement.
    switch (age)
    {
    case 18:
    cout<<"You are 18"<<endl;
        break;
     case 22:
        cout<<"you are 22"<<endl;
        break;
     case 145:
        cout<<"you are dead"<<endl;
        break;
    
    default:
    cout<<"no speacial cases"<<endl;
        break;
    }
    return 0;
}
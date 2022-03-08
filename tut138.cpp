#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int b;
    int a;int i;
    string num[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;
    
        if (a > 0 && a <=9)
        {
        for (int i = a; i <= b; i++)
        
{
    cout << num[i - 1] << endl;
}}
            
        
       else if (a> 9)
        
        {
            
            
            if (a % 2==0)
            {
                cout << "even" << endl;
               
            }
            else
            {
                cout << "odd" << endl;
            }

        }
        
    
    a++;
    return 0;
}

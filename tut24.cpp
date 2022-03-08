#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count; // define kar rahe

public:
    void setData(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "the id of employee is " << id << "and this is employee number" << count << endl;
    }
    static void getCount(void)// static function 
    {
        // cout<<id;// this will throw error as id is not static variable.
        cout<<"the value of count"<<count<<endl;
    }
};
int Employee::count=10000; // count variable is associated with employee class that is  why we kp are using scope resolution and also beacuse we are making count variable static and static variable are never put inside the class(always outside the class)
// default value of count is 0.// here we can also put any value to count ,ex- ...count==1000; then count will not statrt from 0 but from 1000
//count is the static data member
int main()
{
    Employee harry, zayn, louis;
    // harry.id=1;
    // harry.count=1;  // cannot do this as id and count are private
    harry.setData();
    harry.getData();
    Employee:: getCount();

    zayn.setData();
    zayn.getData();
    Employee:: getCount();

    louis.setData();
    louis.getData();
    Employee:: getCount();
    return 0;
}
// static saare object count krte hai ,means harry louis ar zayn tteeno ke liye count =0 hogi pr baad m ek sath teeno ki value update hoti rahengi.
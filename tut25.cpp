#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "enter the id of employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "the id of the employee is " << id << endl;
    }
};
int main()
{
    Employee fb[5];
    // Employee niall;
    // niall.setId();
    //  niall.getId();
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}
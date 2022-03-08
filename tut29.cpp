 #include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    //  creating a constructor
    //  constructor is a special member function with same name as of the class.
    //  it is used to initialize the objects of its class
   // It is automatically invoked whenever an object is created

    Complex(void);// constructor declaration
    void printNumber(void)
    {
        cout << "your number is" << a << "+" << b << "i" << endl;
    }
};

 Complex:: Complex(void)   // complex class hai with scope resolution,uska complex function jo void leta hai.//this is a default constructor.
{
a=2;
b=0;
}
int main()
{
    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

// characteristics of constructor
/* 1- It should be declared in the public section of the class.
   2-They are automatically invoked whenever the object is created
   3-They cannot return values and do not have return types
   4-It can have default arguments
   5- We cannot refer to their address*/
 #include<iostream>
using namespace std;
class Complex
{
int a,b;
public:
Complex(int,int);// constructor declaration


    void printNumber(void)
    {
        cout << "your number is" << a << "+" << b << "i" << endl;
    }
};

 Complex:: Complex(int x,int y)  // parameterized constructor 
{
a=x;
b=y;
}
int main(){
    // implicit call

    Complex q( 4,5);
    q.printNumber();

    //explicit call
     Complex s= Complex(5,6);
     s.printNumber();
    return 0;
}
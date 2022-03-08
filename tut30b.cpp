 #include<iostream>
using namespace std;
class Point
{
    int a,b;
    public:

    Point(int x,int y)
    {
        a=x;
        b=y;
    }
    void displayPoint()
{
 cout<<"the point is("<<a<< ","<<b<<")"<<endl;
}
};
int main(){
    Point p(1,2);
    p.displayPoint();
    Point q(5,6);
    q.displayPoint();
    
    return 0;
}
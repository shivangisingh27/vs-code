//  create a function (hint: make it a friend function) which takes 2 point objects and computes the distance between 2 points.
// parameterized constructors
#include<iostream>
#include<math.h>
using namespace std;
class point{
int x;
int y;
public :
    friend void difference(point , point);
    point(int a, int b){
    x=a;
    y=b;
    }
    void displaypoint(){
    cout<<"The point is : ("<<x<<","<<y<<")"<<endl;
    }

};
void difference(point o1, point o2){
int x_diff=o2.x-o1.x;
int y_diff=o2.y-o1.y;
double dist = sqrt((x_diff)*(x_diff) + (y_diff)*(y_diff));
cout<<"Distance is :"<<dist<<" units";
}

int main()
{
point p1(2,3),p2(4,3);
p1.displaypoint();
p2.displaypoint();
cout<<endl<<endl;
difference(p1,p2);

return 0;
}
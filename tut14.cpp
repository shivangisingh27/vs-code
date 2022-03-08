 #include<iostream>
using namespace std;
struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;

}; 


union money
{
    /* data */
    int rice; //4
    char car;//1
    float pounds;//4
};  

int main(){
    enum Meal{breakfast,lunch,dinner};
    cout<<dinner;
// union money m1;
// m1.rice=34;
// cout<< m1.rice;


    // struct employee harry;
// harry.eId=1;
// harry.favChar='c';
// harry.salary=12000000000;

// cout<<harry.salary<<endl;
// cout<<harry.eId<<endl;

    return 0;
}
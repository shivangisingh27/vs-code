 #include<iostream>
using namespace std;
int product(int a,int b)
{
   // static int c=0;// this executes only once
    /*the value of c will be zero only for first time and it will increase every time i.e., next
     time this function will run,the value of c will retained*/
   // c=c+1;
    return a*b;
    }
    float moneyReceived(int currentMoney,float factor=1.04)

    {
return currentMoney*factor;
    }
int main(){
    int a,b;
    // cout<<"the value of a and b is";

// cin>>a>>b;
int money=100000;
 cout<<"money milega"<<money<<"toh milega"<<moneyReceived(int currentMoney)<<endl;

    return 0;
}
 #include<iostream>
using namespace std;
class Base
{
    protected: // private jaisa hota hai,jisko inherit kiya ja sakta hai.
    int a;
    private:
    int b;

};
/* for a protected member:
            Public derivation Private derivation Protected derivation
Private
Protected
Public
*/
class Derived: Base
{

};
int main(){
    
    return 0;
}
 
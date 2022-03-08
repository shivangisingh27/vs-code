 #include<iostream>
using namespace std;
int main(){
    int marks[4]={23,45,67,89};
   /* cout<<marks[0];
     cout<<marks[1];
      cout<<marks[2];
       cout<<marks[3];*/

    //    using while loop
  /* int i=0;
    while (i<4)
    {
         cout<<"the marks of"<<i<<"is"<<marks[i]<<endl;
        i++;
    }*/
    // pointers and arrays
      int* p=marks; // p mein marks ka address store hua hai.
     cout<<"the value of marks[0] is "<< *p<<endl;
     cout<<"the value of marks[1] is "<< *(p+1)<<endl;
     cout<<"the value of marks[2] is "<< *(p+2)<<endl;
     cout<<"the value of marks[3] is "<< *(p+3)<<endl;


    return 0;
}
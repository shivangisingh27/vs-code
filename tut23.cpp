 #include<iostream>
using namespace std;
class Shop
{
    int itemId[10];
    int itemPrice[10];
    int counter;
    public:
    void initCounter(void)
    {
        counter=0;
    }
    void setPrice(void);
    void displayPrice(void);

};
void Shop::setPrice(void)
{
    cout<<"enter id of your item no"<< counter+1<<endl;
    cin>>itemId[counter];
    cout<<"enter price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"the price of item with id"<<itemId[i]<<"is"<<itemPrice[i]<<endl;
    }
}
int main(){
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    
    return 0;
}
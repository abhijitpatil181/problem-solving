#include <iostream>
using namespace std;

int main()
{
    long long cp,sp;
    cout<<"Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;

    int amount=sp-cp;

    if(amount>0)
    {
        cout<<"Profit is "<<amount;
    }
    else if(amount<0)
    {
        cout<<"Loss is" <<cp-sp;
    }
    else
    {
        cout<<"Neither profit nor loss"<<endl;
    }
}
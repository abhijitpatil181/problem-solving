#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    cin>>num;

    if(to_string(num).length()<6)
    {
        string n=to_string(num);
        reverse(n.begin(),n.end());
        cout<<stoi(n);
    }
    else
    {
        cout<<"Exceeding limit"<<endl;
    }

}
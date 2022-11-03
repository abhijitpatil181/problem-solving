#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cin>>num;
   
    if(to_string(num).length()==5)
    {
        string s=to_string(num);
        int n1=int(s[0])-48;
        int n2=int(s[4])-48;
        cout<<n1+n2<<endl;
    }
    else{
        cout<<"Enter 5 Digit number";
    }
    
}
#include <iostream>
#include <string>
using namespace std;

int sumOfDigit(string num)
{
    int sum=0;
    for(int i=0;i<num.length();i++)
    {
        sum+=int(num[i])-48;
    }
    return sum;
}

int main()
{
    int num;
    cin>>num;

    
    if(to_string(num).length()<6)
    {
        cout<<sumOfDigit(to_string(num));
    }
    else
    {
        cout<<"Exceeding limit";
    }
}
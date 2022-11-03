#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int  addOneToDigit(string nums)
{
    string newNum="";
    int count=0;
    for(int i=0;i<5;i++)
    {
        int n=int(nums[i])-48;
        newNum+=to_string(n+1);
    }
    return stoi(newNum);
}

int main()
{
    int num;
    cin>>num;

    if(to_string(num).length()==5)
    {
        cout<<addOneToDigit(to_string(num));
    }
    else
    {
        cout<<"Enter 5 digit number"<<endl;
    }
}
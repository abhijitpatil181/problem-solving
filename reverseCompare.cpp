#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin>>N;

    if(to_string(N).length()<6)
    {
        string n=to_string(N);
        reverse(n.begin(),n.end());
        int M=stoi(n);
        cout<<std::max(N,M)<<" is Greater than "<<std::min(N,M);
    }
    else
    {
        cout<<"Exceeding limit"<<endl;
    }
}
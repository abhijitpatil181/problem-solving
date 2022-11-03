#include <iostream>
#include <vector>
using namespace std;

void printList(vector<int>l)
{
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

vector<int> createNewList(vector<int>l,int m)
{
    vector<int>newList;
    for(auto i:l)
    {
        newList.push_back(i*m);
    }
    return newList;
}

int main()
{
    vector<int>L1;
    int N,M;
    cout<<"Enter value of Number of Integers:";
    cin>>N;
    cout<<"Enter Integers:";
    for(int i=0;i<N;i++)
    {
        int num;
        cin>>num;
        L1.push_back(num);
    }
    cout<<"Enter value of M:";
    cin>>M;
    vector<int>L2=createNewList(L1,M);
    cout<<"L1:";
    printList(L1);
    cout<<"L2:";
    printList(L2);
}
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

vector<int> createNewList(vector<int>l,int d)
{
    vector<int>newList;
    for(auto i:l)
    {
        if(i%d==0){
            newList.push_back(i);
        }
    }
    return newList;
}


int main()
{
    vector<int>L1;
    int N,D;
    cout<<"Enter value of Number of Integers:";
    cin>>N;
    cout<<"Enter Integers:";
    for(int i=0;i<N;i++)
    {
        int num;
        cin>>num;
        L1.push_back(num);
    }
    cout<<"Enter D:";
    cin>>D;

    vector<int>L2=createNewList(L1,D);
   
    cout<<"list L1:";
    printList(L1);
    cout<<"N:"<<N<<endl;
    cout<<"D:"<<D<<endl;
   
    cout<<"L2:";
    printList(L2);

    cout<<"size of L2:"<<L2.size()<<endl;

    return EXIT_SUCCESS;
    
}
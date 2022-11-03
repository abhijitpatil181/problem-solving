#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void printSet(set<int>& s)
{
    for(auto& i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

void createSet(set<int>& s,int size)
{
  
    for(int i=0;i<size;i++)
    {
        int num;
        cin>>num;
        s.insert(num);
    }

}

int main()
{
    set<int>A,B;
    int N,M;
    cout<<"Enter Cardinality for set A:"<<endl;
    cin>>N;
    cout<<"Enter Cardinality for set B:"<<endl;
    cin>>M;
    cout<<"enter elemenents of set A:"<<endl;
   createSet(A,N);
    cout<<"enter elemenents of set B:"<<endl;
   createSet(B,M);

   set<int>C,D;
   set_union(A.begin(),A.end(),B.begin(),B.end(),std::inserter(C,C.begin()));
   set_intersection(A.begin(),A.end(),B.begin(),B.end(),std::inserter(D,D.begin()));

   cout<<"set A:";
   printSet(A);
   cout<<"set B:";
   printSet(B);
   cout<<"set C:";
   printSet(C);
   cout<<"set D:";
   printSet(D);

   cout<<"cardinality of set C:"<<C.size()<<endl;
   cout<<"cardinality of set D:"<<D.size()<<endl;
   
}
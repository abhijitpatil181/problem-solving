#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>list;
    int N,k,smallestEle;
    cout<<"Enter number of integer:";
    cin>>N;
    cout<<"enter integers:"<<endl;
    for(int i=0;i<N;i++)
    {
        int num;
        cin>>num;
        list.push_back(num);
    }
    vector<int>sortedList(list);

    sort(sortedList.begin(),sortedList.end());
    
    cout<<"Enter value of k:"<<endl;
    cin>>k;
    smallestEle=sortedList[k-1];
    cout<<k<<" th smallest element is:"<<smallestEle<<endl;

    auto it=find(list.begin(),list.end(),smallestEle);

    cout<<"Position of "<<k<<"th smallest element is:"<<((it-list.begin())+1)<<endl;

}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int>nums;
    for(int i=0;i<N;i++)
    {
        int num;
        cin>>num;
        nums.push_back(num);
    }

    int max=*max_element(nums.begin(),nums.end());
    int min=*min_element(nums.begin(),nums.end());

    cout<<"Max element is:"<<max<<'\n'<<"Minimum element is:"<<min<<endl;
    auto maxIndex=find(nums.begin(),nums.end(),max);
    auto minIndex=find(nums.begin(),nums.end(),min);

    cout<<"Position of maximum element is:"<<(maxIndex-nums.begin())+1<<endl;
    cout<<"Position of minimum element is:"<<(minIndex-nums.begin())+1<<endl;

    return EXIT_SUCCESS;
}
#include<bits/stdc++.h>
using namespace std;
bool func(vector<int> &arr,int ind,int target)
{
    if(target==0)
    {
        return true;
    }
    if(ind==arr.size() || target<0)
    {
        return false;
    }
    if(func(arr,ind,target-arr[ind]))
    {
        return true;
    }
    if(func(arr,ind+1,target))
    {
        return true;
    }
    return false;
}
int main()
{
    int n,target;
    cin>>n;
    //cin>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    bool ans=func(arr,0,target);
    if(ans)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;

}
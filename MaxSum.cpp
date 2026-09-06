#include <bits/stdc++.h>
using namespace std;
int maxSum(vector<int> & arr,int i)
{
    if(i>=arr.size()) return 0;
    int take = arr[i] + maxSum(arr,i+2);
    int not_take = maxSum(arr,i+1);
    return max(take,not_take);
}
int main()
{
    vector<int> arr = {5,3,3,4,2,9};
    int n = arr.size();
    cout<<maxSum(arr,0);
    return 0;
}
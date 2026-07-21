#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            st.insert(arr[i]);
        }
        if (st.size() != arr.size())
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(arr.begin(), arr.end(), greater<int>());
            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void subseq(int i, vector<int>& arr, vector<int>& temp) {
    if(i == arr.size()) {

        if(temp.size() == 0) {
            cout << "{}" << endl;
        }
        else {
            for(int x : temp) {
                cout << x << " ";
            }
            cout << endl;
        }
        return;
    }
    // take
    temp.push_back(arr[i]);
    subseq(i + 1, arr, temp);

    // not take
    temp.pop_back();
    subseq(i + 1, arr, temp);
}

int main() {

    vector<int> arr = {1, 2, 3};
    vector<int> temp;

    subseq(0, arr, temp);

    return 0;
}
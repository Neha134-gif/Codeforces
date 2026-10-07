#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        deque<int> dq;
        vector<int> res;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                dq.push_front(i + 1);
            } else if (s[i] == '2') {
                if (!dq.empty()) {
                    dq.pop_front();
                    res.push_back(i + 1);
                }
            }
            // '3': kuch nahi
        }

        for (int x : dq) res.push_back(x);
        sort(res.begin(), res.end());

        cout << res.size() << "\n";
        for (int x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
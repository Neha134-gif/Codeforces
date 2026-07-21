#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> base_arr;

int bfs(int val) {
    map<vector<int>, bool> vis;
    queue<vector<int>> q;
    q.push(base_arr);
    vis[base_arr] = true;
    int ans = n;

    while (!q.empty()) {
        vector<int> cur = q.front(); q.pop();
        int sz = cur.size();

        bool found = false;
        for (int x : cur) if (x == val) { found = true; break; }
        if (!found) continue;

        ans = min(ans, sz);

        for (int i = 0; i + 2 < sz; i++) {
            int a = cur[i], b = cur[i+1], c = cur[i+2];
            int mn = min({a, b, c});
            int mx = max({a, b, c});

            for (int del : {mn, mx}) {
                if (del == val) continue;

                int idx = -1;
                for (int j = i; j <= i+2; j++)
                    if (cur[j] == del) { idx = j; break; }

                vector<int> nxt = cur;
                nxt.erase(nxt.begin() + idx);

                if (!vis[nxt]) {
                    vis[nxt] = true;
                    q.push(nxt);
                }
            }
        }
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        cin >> n;
        base_arr.resize(n);
        for (int i = 0; i < n; i++) cin >> base_arr[i];

        for (int i = 0; i < n; i++) {
            cout << bfs(base_arr[i]);
            if (i < n-1) cout << " ";
        }
        cout << "\n";
    }
}
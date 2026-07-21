#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        for (int i = 0; i < n; i++) {
            int v = p[i];
            int l = 0, r = 0;

            for (int j = 0; j < i; j++)
                if (p[j] < v) l++;

            for (int j = i+1; j < n; j++)
                if (p[j] < v) r++;

            cout << min(l, r) + 1;
            if (i < n-1) cout << " ";
        }
        cout << "\n";
    }
}
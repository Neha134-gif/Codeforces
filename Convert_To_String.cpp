#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string A, B;
        cin >> A >> B;

        bool possible = true;

        // target[c] = positions which finally need character c
        vector<vector<int>> target(26);
        
        // Step 1: Check impossible cases
        // Step 2: Store mismatches according to target character
        for (int i = 0; i < N; i++) {

            if (A[i] < B[i]) {
                possible = false;
                break;
            }

            if (A[i] != B[i]) {
                target[B[i] - 'a'].push_back(i);
            }
        }

        if (!possible) {
            cout << -1 << '\n';
            continue;
        }

        vector<vector<int>> operations;

        // Process target characters from z -> a
        for (int c = 25; c >= 0; c--) {

            if (target[c].empty())
                continue;

            char ch = 'a' + c;

            // Find an anchor whose current character is ch
            int anchor = -1;

            for (int i = 0; i < N; i++) {
                if (A[i] == ch) {
                    anchor = i;
                    break;
                }
            }

            // No anchor means impossible
            if (anchor == -1) {
                possible = false;
                break;
            }

            vector<int> op;

            // Add all positions which need this character
            for (int i : target[c]) {
                op.push_back(i);
                A[i] = ch;
            }

            // Add anchor
            if (find(op.begin(), op.end(), anchor) == op.end()) {
                op.push_back(anchor);
            }

            // Apply operation
            for (int i : op) {
                A[i] = ch;
            }

            operations.push_back(op);
        }

        if (!possible) {
            cout << -1 << '\n';
            continue;
        }

        cout << operations.size() << '\n';

        for (auto &op : operations) {
            cout << op.size();

            for (int index : op) {
                cout << " " << index;
            }

            cout << '\n';
        }
    }

    return 0;
}
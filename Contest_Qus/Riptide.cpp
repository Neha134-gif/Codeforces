#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int rounds = 0;

        while (true) {
            if (a == b || b == c || a == c)
                break;

            if (a > b && a > c)
                a--;
            else if (b > a && b > c)
                b--;
            else
                c--;

            if (a < b && a < c)
                a++;
            else if (b < a && b < c)
                b++;
            else
                c++;

            rounds++;
        }

        cout << rounds << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        int k, x;
        cin >> k >> x;
        cout << (k * x) + 1 << '\n';
    }

    return 0;
}
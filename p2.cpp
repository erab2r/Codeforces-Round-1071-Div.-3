#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        if (n % 4 == 0) {
            cout << 0 << '\n';
        } else if (n % 4 == 2) {
            cout << 2 << '\n';
        } else {
            cout << 1 << '\n';
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> children(n + 1, 0);
    
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        if (u > v) swap(u, v); 
        children[u]++; 
    }
    int max_ops = 0;
    for (int i = 1; i <= n; i++) {
        max_ops = max(max_ops, children[i] + 1); 
    }
    if (children[1] > 1) max_ops = max(max_ops, children[1] + 1);
    cout << max_ops << "\n";
}

int main() {
    FAST;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

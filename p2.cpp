#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;
#define sz(yo) (ll)yo.size()
 
void solve() {
   int n;
   cin >> n;
   unordered_map<string, int> cnt;
   for (int i = n - 1; i >= 0; i--) {
      string s;
      cin >> s;
      cnt[s] = i;
   }
   vector <string> ans(n);
   for (auto p : cnt) {
      ans[p.second] = p.first;
   }
   for (int i = 0; i < n; i++) {
      if (!ans[i].empty()) {
         cout << ans[i] << '\n';
      }
   }
}
 
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
   ll t;
   t = 1;
   for (ll cs = 1; cs <= t; cs++) {
      solve();
   }
 
   return 0;
}
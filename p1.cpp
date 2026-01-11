#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;
#define sz(yo) (int)yo.size()
 
void solve() {
   int n, m, k;
   cin >> n >> m >> k;
   k--;
   auto ok = [&](int mid) {
      int need = 2e9 + 9;
      int i = 0, j = mid - 1;
      while (j < n) {
         if (k < i) {
            break;
         }
         if (k > j) {
            i++;
            j++;
            continue;
         }
         int left = k - i, right = j - k;
         need = min(need, left - 1 + max(left, right) + right);
         i++, j++;
      }
      return need <= m;
      };
 
   int l = 1, r = n, mid, ans = 1;
 
   while (l <= r) {
      mid = l + (r - l) / 2;
      if (ok(mid)) {
         ans = mid;
         l = mid + 1;
      }
      else {
         r = mid - 1;
      }
   }
 
   cout << ans << '\n';
}
 
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
   int t;
   t = 1;
   cin >> t;
   for (int cs = 1; cs <= t; cs++) {
      // cout << "Case " << cs << ": ";
      solve();
   }
   return 0;
}


https://codeforces.com/contest/2183/problem/C
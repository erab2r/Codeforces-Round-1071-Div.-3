#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;
#define sz(yo) (int)yo.size()
 
void solve() {
   ll n;
   cin >> n;
   if (n == 2) {
      cout << 2 << '\n';
   }
   else if (n == 3) {
      cout << 3 << '\n';
   }
   else if ((n % 2 == 0) && (n / 2) % 2 == 0) {
      cout << 0 << '\n';
   }
   else if ((n % 3 == 0) && (n / 3) % 2 == 0) {
      cout << 0 << '\n';
   }
   else {
      ll x = n / 2, y = n - x;
      cout << abs(x - y) << '\n';
   }
}
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
   int tc;
   tc = 1;
   cin >> tc;
   for (int cs = 1; cs <= tc; cs++) {
      solve();
   }
   return 0;
}
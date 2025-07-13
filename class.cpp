// Bruteforce Range Sum
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
int n, q;
cin >> n >> q; 
int x[n + 1];
for (int i = 1; i <= n; i++) {
cin >> x[i];
}
while(q--) {
int a, b; 
cin >> a >> b;
ll sum = 0; 
for (int i = a; i <= b; i++) {
sum = sum + x[i];
}
cout << sum << '\n';
}
}
 
int main() {
cin.tie(0)->sync_with_stdio(0);
int tc = 1; 
// cin >> tc;
while(tc--) {
solve();
}
}
 
// Prefix Sum
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
int n, q;
cin >> n >> q; 
int x[n + 1];
int pf[n + 1];
for (int i = 0; i <= n; i++) {
pf[i] = 0;
}
for (int i = 1; i <= n; i++) {
cin >> x[i];
}
ll sum = 0;
for (int i = 1; i <= n; i++) {
sum = sum + x[i];
pf[i] = sum;
}
while(q--) {
int a, b; 
cin >> a >> b;
ll res = pf[b] - pf[a - 1];
cout << res << '\n';
}
}
 
int main() {
cin.tie(0)->sync_with_stdio(0);
int tc = 1; 
// cin >> tc;
while(tc--) {
solve();
}
}
 
// D Optimize
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
ll n;
cin >> n; 
ll a[n + 1], pf[n + 1], mod[n + 1];
for (ll i = 1; i <= n; i++) {
cin >> a[i];
}
for (ll i = 0; i <= n; i++) {
pf[i] = 0;
}
for (ll i = 1; i <= n; i++) {
pf[i] = pf[i - 1] + a[i];
mod[i] = pf[i] % 7;
}
ll mx = 0;
// zero case
for (ll i = 1; i <= n; i++) {
if (mod[i] == 0) {
mx = max(mx, i);
}
}
for (ll i = 1; i < 7; i++) {
ll l = -1, r = -1;
// left
for (ll j = 1; j <= n; j++) {
if (mod[j] == i) {
l = j; 
break;
} 
}
// right
for (ll j = n; j > 0; j--) {
if (mod[j] == i) {
r = j; 
break;
} 
}
mx = max(mx, r - l);
}
cout << mx << '\n';
}
 
signed main() {
cin.tie(0)->sync_with_stdio(0);
freopen("div7.in", "r", stdin);
  freopen("div7.out", "w", stdout);
ll tc = 1; 
// cin >> tc;
while(tc--) {
solve();
}
}
 
// D Bruteforce
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
ll n;
cin >> n; 
ll a[n + 1], pf[n + 1], mod[n + 1];
for (ll i = 1; i <= n; i++) {
cin >> a[i];
}
for (ll i = 0; i <= n; i++) {
pf[i] = 0;
}
for (ll i = 1; i <= n; i++) {
pf[i] = pf[i - 1] + a[i];
}
ll mx = 0;
for (ll i = 1; i <= n; i++) {
for (ll j = i; j <= n; j++) {
ll res = pf[j] - pf[i - 1];
if (res % 7 == 0) {
mx = max(mx, j - i + 1);
}
}
}
cout << mx << '\n';
}
 
signed main() {
cin.tie(0)->sync_with_stdio(0);
// freopen("div7.in", "r", stdin);
  // freopen("div7.out", "w", stdout);
ll tc = 1; 
// cin >> tc;
while(tc--) {
solve();
}
}

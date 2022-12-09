#include<bits/stdc++.h>
#define MAX 100005
#define MOD 1000000007
#define fi first
#define se second
#define inf 0x3f3f3f3f
#define BIT(n) (1 << (n))
#define GETBIT(mask, n) (((mask) >> (n)) & 1)
#define endl '\n'
#define TASK "ABC"
using namespace std;
using ll = long long;
using ii = pair<int, int>;
using pll = pair<ll, ll>;

// mt19937 rng(chrono :: steady_clock :: now().time_since_epoch().count());
// int random(int l, int r) {
//     return uniform_int_distribution<int>(l, r)(rng);
// }

// #include<ext/pb_ds/tree_policy.hpp>
// #include<ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

template<class T> bool minimize(T &a, const T &b) {
    if (a > b) {a = b; return true;}
    return false;
}
template<class T> bool maximize(T &a, const T &b) {
    if (a < b) {a = b; return true;}
    return false;
}

void process() {
	ll a, b; cin >> a >> b;
    ll res(0);

    for (ll i = a; i <= b; i ++) {
        res += i;
    }

    cout << res;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);   
    if (fopen(TASK".inp", "r")) {
        freopen(TASK".inp", "r", stdin);
        freopen(TASK".out", "w", stdout);    
    }

    process();

    return 0;
}
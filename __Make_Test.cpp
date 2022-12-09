#include<bits/stdc++.h>
#define MAX 100005
#define MOD 1000000007
#define fi first
#define se second
#define inf 0x3f3f3f3f
#define BIT(n) (1 << (n))
#define GETBIT(mask, n) (((mask) >> (n)) & 1)
#define endl '\n'
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;

template<class T> bool minimize(T &a, const T &b) {
    if (a > b) {a = b; return true;}
    return false;
}
template<class T> bool maximize(T &a, const T &b) {
    if (a < b) {a = b; return true;}
    return false;
}

mt19937 rng(chrono :: steady_clock :: now().time_since_epoch().count());
int random(int l, int r) {
    return uniform_int_distribution<int>(l, r)(rng);
}

string NAME_SYSTEM = "__name_system.txt"; // all name of file
string NAME, Info, tmp_file;
int INDEX_TEST;

void read_infomation() {
    ifstream cnamesys(NAME_SYSTEM.c_str(), ios::in);
    string noname;
    cnamesys >> noname >> Info >> tmp_file;
    cnamesys.close();

    ifstream cinfo(Info.c_str(), ios::in);
    cinfo >> NAME;
    cinfo.close();

    ifstream ctmp_file(tmp_file.c_str(), ios::in);
    ctmp_file >> INDEX_TEST;
    ctmp_file.close();
}

void make_test(int index_test);

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    srand(time(NULL));
    read_infomation();

    freopen((NAME + ".inp").c_str(), "w", stdout);
    make_test(INDEX_TEST);
}

/* - - - - - - - - - - - - - - - - - - - --------------------------------------
** - - - - - - - - - - -  - - - - -------------------          -----  ------ --
** - - - - - - - - - - - - - - - -      -      ------ -------------- - ----- --
** - - - - - - - - - - - - - - -                 ---- -----    ----- -- ---- --
** - - - - - - - - - - - - - - - -              ------ -------------- --- --- --
** - - - - - - - - - - - - - - - - -         -------- ----     ----- ---- -- --
** - - - - - - - - - - - - - - - - - -     ---------- -------- ----- ----- - --
** - - - - - - - - - - - - - - - - - - - ------------          ----- ------  --
** - - - - - - - - - - - - - - - - - - ----------------------------------------
*/

void make_test(int index_test) {
    ll a = random(1, 100000 * index_test * index_test);
    ll b = random(a, 100000 * index_test * index_test);    

    cout << a << ' ' << b;

    return;
}
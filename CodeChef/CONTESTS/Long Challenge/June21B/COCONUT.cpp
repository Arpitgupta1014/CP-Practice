#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

int main()
{
    fast;

    ll t; cin >> t;

    while (t--) {
        double xa, xb, ra, rb;
        cin >> xa >> xb >> ra >> rb;

        double ans = ceil(ra / xa) + ceil(rb / xb);
        cout << ans << endl;
    }

    return 0;
}
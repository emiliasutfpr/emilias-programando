    #include <bits/stdc++.h>
     
    using namespace std;
     
    typedef long long int ll;
     
    void solve() {
        for (int i = 3; i <= 53; ++i) {
            cout << "? " << i << ' ' << i + 1 << '\n';
            cout.flush();
            ll x; cin >> x;
            if (x == 0) return;
            if (x == -1) {
                cout << "! " << i << '\n';
                return;
            }
            cout << "? " << i + 1 << ' ' << i << '\n';
            cout.flush();
            ll y; cin >> y;
            if (x != y) {
                cout << "! " << x + y << '\n';
                return;
            }
        }
    }
     
    int main() {
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        solve();
        return 0;
    }
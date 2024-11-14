    #include<bits/stdc++.h>
    using namespace std;
    #define rep(i, a, b) for(int i = a; i < b; i++)
    #define vi vector<int> 
    #define vvi vector<vi>
     
    void solve() {
        long long n, m;
        cin >> n >> m;
        n = (n << 1) - 1;
     
        vector<char> a(m + 5, 0);
        string s;
        
        rep(i, 0, n) {
            cin >> s;
            rep(j, 0, m) {
                a[j] ^= s[j];
            }
        }
     
        rep(i, 0, m) {
            cout << a[i];
        }
        cout << endl;
    }
     
    bool isprime(long long n) {
        bool is_prime = true;
        if (n == 0 || n == 1) {
            is_prime = false;
        }
        for (long long i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }
        return is_prime;
    }
     
    int main() { 
        ios_base::sync_with_stdio(0); 
        cin.tie(0); 
        cout.tie(0);
     
        int t;
        cin >> t;
        while (t--) {
            solve();
        }
    }
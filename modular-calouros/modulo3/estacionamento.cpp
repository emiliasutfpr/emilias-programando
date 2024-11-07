#include <bits/stdc++.h>
using namespace std;


vector<int> vagas;
vector<int> plano(112345);


int main() {
    int n, m;
    cin >> n >> m;
    int ans = 0;


    for (int i = 1; i <= n; i++) {
        vagas.push_back(i);
    }


    int flag = 0;
   
    for (int i = 0; i < m; i++) {
        cin >> plano[i];
        auto it = upper_bound(vagas.begin(),vagas.end(),plano[i]);
        if(it == vagas.begin() && flag ==0)
            flag=1;
        if(flag == 0){
            it--;
            vagas.erase(it);
            ans++;
        }    
    }


    cout << ans << endl;


    return 0;
}

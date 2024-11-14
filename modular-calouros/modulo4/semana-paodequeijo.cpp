#include <bits/stdc++.h>

using namespace std;
int matriz [121][121];
int ans [121][121];

int main (){
    int n,m;

    
    while(cin>>n>>m) {

        for(int i = 0 ; i < n ;i++){
            for (int j = 0; j < m; j++)
            {
                cin>>matriz[i][j];
            }
            
        }

        int di[4] = {0,1,-1,0};
        int dj[4] = {1,0,0,-1 };

        for(int i = 0 ; i < n ;i++){
            for (int j = 0; j < m; j++)
            {   
                if(matriz[i][j] == 1){
                    ans[i][j] = 9; 
                }

                else{
                    
                    for(int k =0; k< 4; k++){

                        int ni = i + di[k];
                        int nj = j + dj[k];

                        if( ni >= 0 && ni<n && nj >=0 && nj<m ){
                            if(matriz[ni][nj] == 1)
                                ans[i][j]++;
                        }
                    }

                }
            
            }
            
        }

        for(int i = 0 ; i < n ;i++){
            for (int j = 0; j < m; j++)
            { 
                cout<<ans[i][j];
            }
            cout<<endl;
        }
    memset(ans, 0, sizeof(ans));
    memset(matriz, 0, sizeof(matriz));

    }

    return 0;
}

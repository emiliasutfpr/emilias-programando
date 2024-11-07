#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long n,m,i,j,k=0,x=4;

    cin>>n >> m;

    long a[m][m];

    while(k<n){
        i=0;
        while(i<m){
            j=0;
            while(j<m){
                cin>> a[i][j];
                a[i][j] = a[i][j]*a[i][j];
                j++;
            }
            i++;
        }
        cout<< "Quadrado da matriz #"<<x<< ":"<< endl;
        i=0;
        while(i<m){
            j=0;
            while(j<m){
                unsigned long long maior =0;
                int w=0;
                while(w<m){
                    if(maior<a[w][j]){
                        maior = a[w][j];

                    }
                    w++;
                }
                int len = to_string(maior).length();
                cout<<(j == 0 ? "" : " ")<<setw(len)<<a[i][j];
                j++;
            }
            i++;
            cout<<endl;
        }
        if(k+1 != n){
                cout<<endl;
            }
        x++;
        k++;
    }
    return 0;

}

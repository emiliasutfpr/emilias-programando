#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i,cont;
    string f;
    cin>>n;
    cin.ignore();

    while(i<n){
        getline(cin,f);
        set<char> l;

        for (char c : f) {
            if (isalpha(c)) {
                l.insert(tolower(c));
            }
        }

        cont = l.size();

        if(cont == 26){
            cout<< "frase completa"<<endl;
        }
        else if(cont>=13){
            cout<< "frase quase completa"<<endl;
        }
        else{
            cout<< "frase mal elaborada"<<endl;
        }
        i++;
    }
    return 0;
}

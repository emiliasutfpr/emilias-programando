#include<bits/stdc++.h> 
using namespace std; // Usa o namespace padrão para evitar escrever std:: antes de cin e cout

int main(){

    long t; // declara a variavel t como tipo longlong
    cin >> t;  // substitui scanf por cin para ler o número de casos de teste

    while(t--){  // loop que executa t vezes, decrementando t após cada iteração

        long n, k; //variavel declarada localmente 
        cin >> n >> k;  // substitui scanf por cin para ler os valores de n e k

        long odd = ((k + (n % 2)) / 2) % 2;  // calcula se a expressão resulta em um número ímpar ou par

        cout << (odd ? "NO" : "YES") << endl;  // imprime "NO" se odd for 1, "YES" se odd for 0
    }

}

#include <bits/stdc++.h>

using namespace std;

int main(){

    int d,vf,vg;

    while (cin>>d>>vf>>vg){

        double tf = 12.0/vf;

        double dg =  sqrt(12*12 + d *d);

        double tg = dg/vg;

        if (tg <= tf)
            cout << "S" << endl;
        else 
             cout << "N" << endl;
    }
      return 0;
}

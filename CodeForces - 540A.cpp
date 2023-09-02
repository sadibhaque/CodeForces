#include <bits/stdc++.h>
using namespace std;


int main() {
    int x;
    string a,b;

    cin>>x;
    cin>>a;
    cin>>b;

    int ctr = 0;

    for (int i = 0; i < x; i++) {
        int m;
        int n;

        int p = int(a[i] - '0');
        int q = int(b[i] - '0');

        if(p>q){
            m = p;
            n = q;
        }
        else{
            n = p;
            m = q;
        }

        int c = n+10-m;
        int d = m - n;

        int res = min(c,d);

        ctr = ctr + res;

    }
    cout<<ctr<<endl;


}

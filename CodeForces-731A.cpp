#include <bits/stdc++.h>

using namespace std;

int main() {
    int q,m,ni,p;

    string str;
    cin>>str;

    str.insert(0,1, 'a');

    int n = str.length();

    int ctr=0;

    for (int i = 0; i < n-1; i++) {
        int c1 = int(str[i]);
        int c2 = int(str[i+1]);

        p = min(c1,c2);
        q = max(c1,c2);
        m = abs(q-p);
        ni = abs(p+26-q);

        int x = min(m,ni);

        ctr = ctr+x;
    }

    cout<<ctr<<endl;
    
}


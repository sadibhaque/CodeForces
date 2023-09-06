#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

    ll n,x,y;

    cin>>n;

    for (int j = 0; j < n; j++) {
        long long ctr=0;

        cin>>x>>y;

        while(1){
            if(x%y == 0){
                x /= y;
                ctr++; 
            }
            else{
                ll r = x%y;
                ctr += r;
                x -= r;
            }
            if(x==0) break;
        }
        cout<<ctr<<endl;
    }
    return 0;
}
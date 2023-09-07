#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

    int t;
    cin>>t;

    for (int i = 0; i < t; i++){
        ll x,y,z,ctr=0;
        cin>>x>>y>>z;
        ll a = max(x,y);
        ll b = min(x,y);

        if(x==y){
            cout<<"0\n";
        }
        else if(z >= abs(x-y)){
            cout<<"1\n";
        }
        else{
            for (int j = 0; j < a; j++){
                a -= z;
                b += z;
                ctr++;
                if(b>=a) break;
            }
            cout<<ctr<<endl;
        }

            
    }
    return 0;
}
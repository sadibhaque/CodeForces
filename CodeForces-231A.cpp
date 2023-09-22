#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define llf double

int main() {

    ll n,t; 
    ll sum = 0,ctr=0,flag=0;
    cin>>t;

    for (int i = 0; i < t; i++){
        ll arr[t];
        ll x,y,z;
        cin>>x>>y>>z;
        
        if(x+y+z >= 2) sum++;
    }
    cout<<sum<<endl;

    return 0;
}
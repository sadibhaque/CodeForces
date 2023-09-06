#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

    ll n;
    cin>>n;

    for (int i = 0; i < n; i++){
        ll x;
        cin>>x;
        ll ans = 0;

        ll arr[x];
        cin>>arr[0];
        ll p = arr[0]%2;

        for (int i = 1; i < x; i++) cin>>arr[i];

        for (int j = 1; j < x; j++){
            if(arr[j] % 2 != p) ans = 1;
        }

        if(ans == 0) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
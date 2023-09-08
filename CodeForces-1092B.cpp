#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

    ll t,sum=0;
    cin>>t;
    ll arr[t];

    for(int i=0;i<t;i++){
        cin>>arr[i];
    }

    sort(arr,arr +t);

    for (int j = 0; j < t-1; j+=2){
        sum = sum + abs(arr[j]-arr[j+1]);
    }

    cout<<sum<<endl;
    return 0;
}
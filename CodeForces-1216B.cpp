#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

    ll t,sum=0;
    cin>>t;
    ll arr[t],x[t],y[t],sorted[t];


    for(ll i=0;i<t;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < t; i++) x[i] = arr[i]; 
    
    sort(arr,arr+t);reverse(arr,arr+t);

    for (int i = 0; i < t; i++) sorted[i] = arr[i]; 

    for (int i = 0; i < t; i++){
        for (int j = 0; j < t; j++){
            if (sorted[i] == x[j]){
            y[i] = j;
            x[j] = 0;
            break;
            }
        }
    }


    for (int i = 0; i < t; i++){
        sum+=(arr[i] * i + 1);
    }

    cout<<sum<<endl;
    for (int i = 0; i < t; i++) cout<<y[i]+1<<" ";

    return 0;
}
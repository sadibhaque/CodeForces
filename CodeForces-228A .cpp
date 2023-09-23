#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define llf double

int main() {

    ll arr[4];
    ll sum = 0;

    for (int i = 0; i < 4; i++) cin>>arr[i];
    sort(arr,arr+4);

    for (int i = 0; i < 3; i++){
        if(arr[i] == arr[i+1]) sum++;
    }

    cout<<sum;


    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll s,x,ctr = 0;
    cin>>s>>x;

    while(s != 0){
        s = s/x;
        ctr++;
    }
    cout<<ctr;
}

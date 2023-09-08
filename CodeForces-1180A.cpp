#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll rhombus(int x){
    ll sum = 0;

    if(x==1) return 1;
    else{
        return ((x-1) * 4) + rhombus(x-1); 
    }  
}

int main() {

    ll t,sum=0;
    cin>>t;

    cout<<rhombus(t)<<endl;

    return 0;
}
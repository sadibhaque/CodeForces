#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
int main() {
 
    ll n,current=0;
    cin>>n;
    string str;
    cin>>str;
 
    for (int i = 0; i < n; i++){
        cout<<str[current];
        current += i + 1;
    }
 
    return 0;
}
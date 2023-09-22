#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define llf double
 
int main() {
 
    ll t; 
    cin>>t;
 
    ll a=0, b=0, c=0;
 
    for (int i = 0; i < t; i++){
        string s;
        cin>>s;
 
        int ctr = 0;
 
        if (s[0] != 'a') {
            ctr++;
        }
 
        if (s[1] != 'b') {
            ctr++;
        }
 
        if (s[2] != 'c') {
            ctr++;
        }
 
        if (ctr == 2 || ctr == 0) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

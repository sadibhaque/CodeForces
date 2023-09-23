#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define llf double

int main() {

    string str;
    ll ctr=0;

    cin>>str;
    ll n = str.length();

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(str[i] == str[j]){
                str[i] = 'X';
            }
        }
    }

    for (int i = 0; i < n; i++){
        if(str[i] != 'X'){
            ctr++;
        }
    }

    if(ctr%2 == 0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;
}
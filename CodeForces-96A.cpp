#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() 
{
    string str;
    ll ctr = 1,flag=-1;

    cin>>str;

    for (int i = 0; i < str.length(); i++){
        if(str[i] == str[i+1]){
            ctr++;
            if(ctr >= 7){
                flag = 1;
            }
        }
        else{
            ctr = 1;
        }
    }

    if(flag == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

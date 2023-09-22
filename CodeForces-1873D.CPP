#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define llf double
 
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        ll sum = 0;
        
        for(int i=0;i<n;i++){
            if(str[i]=='B'){
                sum++;
                i+=k-1;
            }
        }
 
        cout<<sum<<endl;  
    }
 
   return 0;
}

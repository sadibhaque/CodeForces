#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int temp,flag=0;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp==k){
                flag=1; 
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
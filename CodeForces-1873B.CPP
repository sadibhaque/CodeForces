#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define llf double
 
int main() 
{ 
    ll t; 
    cin>>t; 
    while(t--){ 
       ll s; 
       cin>>s; 
       ll arr[s]; 
       for(int i=0;i<s;i++){ 
        cin>>arr[i]; 
       } 
       sort(arr,arr+s); 
       arr[0]=arr[0]+1; 
       ll sum=1; 
       for(int i=0;i<s;i++){ 
        sum=sum*arr[i]; 
       } 
       cout<<sum<<endl; 
    } 
}

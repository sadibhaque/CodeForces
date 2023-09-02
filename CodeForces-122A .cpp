#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,x,ctr=0;
    cin>>n;
    x=n;
 
    string str = to_string(x);
 
    int a = str.length();
 
    for(int i=0; i<a; i++){
        if(str[i] == '4' || str[i] == '7'){
            ctr++;
        }
    }
 
    if(n%4 == 0 || n%7 == 0 || n%47==0|| n%74==0 || a == ctr){
        cout<<"YES"<<endl;
    }   
    else{
        cout<<"NO"<<endl;
    }
}

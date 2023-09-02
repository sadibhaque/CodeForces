#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x,ctr=0;

    cin>>n;
    string str;

    cin>>str;

    int size = str.length();

    x = size/11;

    for(int j=0; j<n; j++){
        if(str[j] == '8'){
            ctr++;
        }
    }

    if(size >= 11){
        if(ctr>x){
            cout<<x<<endl;
        }
        else{
            cout<<ctr<<endl;
        }
    }
    else{
        cout<<"0"<<endl;
    }

    
}

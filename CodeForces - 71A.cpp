#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;

    cin>>n;

    for (int i = 0; i < n; i++) {
        string str;

        cin>>str;

        int a = str.length();

        if(a<=10){
            cout<<str<<endl;
        }
        else{
            cout<<str[0]<<a-2<<str[a-1]<<endl;
        }
    }
    return 0;
}

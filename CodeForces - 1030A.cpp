#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        int ctr =0;
        cin>>arr[i];
        if(arr[i] == 1){
            cout<<"Hard"<<endl;
            break;
        }
        else{
            for (int j = 0; j < n; j++) {
            if(arr[j] == 0){
                ctr++;
            }
        }
            if(ctr == n){
                cout<<"Easy"<<endl;
            }
        }
    }


    return 0;
}

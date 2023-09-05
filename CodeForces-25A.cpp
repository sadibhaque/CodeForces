#include <bits/stdc++.h>

using namespace std;


int main() {

    int n,ctr1=0,ctr2=0;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for (int j = 0; j < n; j++){
        if(arr[j]%2 ==0) ctr1++;
        else ctr2++;
    }
    
    if (ctr1 > ctr2) {
        for (int k = 0; k < n; k++) {
            if ((arr[k] % 2) != 0) {
                cout << k + 1 << endl;
                break;
            }
        }
    } 
    else {
        for (int l = 0; l < n; l++) {
            if ((arr[l] % 2) == 0) {
                cout << l + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
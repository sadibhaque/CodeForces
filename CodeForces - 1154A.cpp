#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[4],final[3],max=0;
    for (int i = 0; i < 4; i++) {
        cin>>arr[i];
    }
    sort(arr,arr + 4);
    for (int j = 0; j < 4; j++) {
        if(arr[j]>max){
            max = arr[j];
        }
    }
    for (int k = 0; k < 3; k++) {
        final[k] = max - arr[k];
    }
    sort(final,final + 3);
    for (int l = 0; l < 3; l++) {
        cout<<final[l]<<" ";
    }
}

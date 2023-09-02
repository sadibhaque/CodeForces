#include <bits/stdc++.h>

using namespace std;

int main() {

    string str;

    cin>>str;

    int n = str.length();

    int arr[n/2+1];

    int index = 0;

    for (int j = 0; j < n; j+=2) {
        if(str[j] == '3'){
            arr[index] = 3;
        }
        else if(str[j] == '2'){
            arr[index] = 2;
        }
        else if(str[j] == '1'){
            arr[index] = 1;
        }
        index++;
    }
    
    sort(arr, arr + (n/2+1));

    for (int l = 0; l < n; l++) {
        if(l%2 != 0){
            cout<<"+";
        }
        else{
            cout<<arr[l/2];
        }
    }
}

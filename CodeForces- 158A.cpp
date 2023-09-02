#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    int key,ctr=0;
    
    scanf("%d %d", &x,&key);

    int arr[x];

    for(int i=0; i<x; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<x; j++){
        if(arr[j] > 0 && arr[j]>=arr[key-1]){
            ctr++;
        }
    }
    printf("%d\n",ctr);


    return 0;
}

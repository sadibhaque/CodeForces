#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    
    scanf("%d", &x);

    int home[x];
    int guest[x];

        
    int ctr= 0; 

    for(int j = 0; j < x; j++){
        scanf("%d %d", &home[j], &guest[j]);
    }

    for(int j = 0; j < x; j++){
        for(int k = 0; k < x; k++){
            if(home[j] == guest[k]){
                ctr++;
            }
        }
    }

    printf("%d\n", ctr);

    return 0;
}

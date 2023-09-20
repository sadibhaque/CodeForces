#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define llf double


int main() {

    ll arr[11][11];
    ll flag=0;

    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= 10; j++){
            arr[i][j] = 0;
        }
    }

    ll t;
    cin>>t;
    ll D,L,R,C;
    
    for(ll te=1; te<=t; te++){
        cin>>D>>L>>R>>C;

        if(D==0 && arr [R][C + L - 1] != 0 ){
            flag = 1;
            break;
        }
        else if(D!=0 && arr[R + L - 1][C] != 0){
            flag = 1;
            break;
        }
        else{
            if(D == 0){
                for (int i = R; i <=R; i++){
                    for (int j = C; j <= C + L - 1; j++){
                        if(arr[i][j] == 0){
                            arr[i][j] = 1;
                        }
                        else{
                            flag += 1;
                            arr[i][j] = 2;
                        }
                    }
                }
            }
            else{
                for (int i = R; i <= R + L - 1; i++){
                    if(arr[i][C] == 0){
                        arr[i][C] = 1;
                    }
                    else{
                        flag += 1;
                        arr[i][C] = 2;
                    }  
                }
            }
        }
    }   

    if(flag == 0){
        cout<<"Y"<<endl;
    }
    else{
        cout<<"N"<<endl;
    }
    return 0;
}

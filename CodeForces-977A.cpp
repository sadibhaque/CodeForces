#include <bits/stdc++.h>
using namespace std;

#define ll long long int
void input(){
    freopen("/home/mendax/Workspace/Temp /input.txt","r",stdin);
    freopen("/home/mendax/Workspace/Temp /output.txt","w",stdout);

}

int main(){
    input();
    ll n,k;
    cin>>n>>k;

    for (int i = 0; i < k; i++){
        if(n % 10 == 0) n /= 10;
        else n--;
    }

    cout<<n<<endl;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define llf double

int main() {

    ll t; 
    cin>>t;

    while (t--)
    {
        ll n = 10, m = 10; 
        char str[n + 1][m + 1]; 
        for (int i = 1; i <= n; i++) 
        { 
            for (int j = 1; j <= m; j++) 
            { 
                cin>>str[i][j]; 
            }
        }
        ll sum = 0; 
        for (int i = 1; i <= n; i++) 
        { 
            for (int j = 1; j <= m; j++) 
            { 
                if (str[i][j] == 'X')
                { 
                    if(i >= 5 && i <= 6 && j >= 5 && j <= 6) sum += 5; 
                    else if(i >= 4 && i <= 7 && j >= 4 && j <= 7) sum += 4; 
                    else if(i >= 3 && j >= 3 && i <= 8 && j <= 8) sum += 3; 
                    else if(i >= 2 && j >= 2 && i <= 9 && j <= 9) sum += 2; 
                    else sum++;
                } 
            } 
        } 
        cout<<sum<<endl;
    }
    
    return 0;
}

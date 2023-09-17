#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() 
{
    string str;
    ll ctr = 1,flag=-1;

    cin>>str;

    for (int i = 0; i < str.length(); i++){
        if(str[i] == 'a' ||  str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' || str[i] == 'Y' || str[i] == 'A' ||  str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            continue;
        }
        else printf(".%c",tolower(str[i]));
    }

    return 0;
}

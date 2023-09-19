    #include <bits/stdc++.h>
    using namespace std;
 
    #define ll long long int
 
    int main()
    {
        ll t;
        cin >> t;   
        while(t--)
        {
            ll n, k, x;
            cin>>n>>k>>x;
 
            if (k > n || k - 1 > x){
                cout << "-1" << endl;
            continue;
            }
 
            ll ctr = 0, sum = 0, temp = k;
 
            while (temp){
                sum += temp;
                ctr += 1;
                temp--;
            }
            sum -= k;
 
            if (x == k){
                sum += (n-ctr) * (x-1);
            }
            else{
                sum += (n-ctr) * (x);
            }
 
            cout<<sum<<endl;
        }
    }

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fx(x) fixed<<setprecision(x)
using namespace std;

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve(){
    ll n; cin >> n;

    if(n<2020) cout << "NO" << endl;
    else{
        // 12123
        int res=n/2020; // 6 times 2020 = 12120
        int rem=n%2020; // 3 time 2021 = 6063
        
        // 2020 = 6-3= 3 times == 6060+6063(3 times 2021) ans....

        if(res<rem) cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
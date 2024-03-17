#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll r,c;
    cin>>r>>c;
    
    ll ans=ceil((r*1.0 * c*1.0)/3);
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
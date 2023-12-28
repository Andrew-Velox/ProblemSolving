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
    ll len; cin >> len;

    ll ar[len];
    ll sum=0;
    for(int x=0; x<len; x++){
        cin >> ar[x];
        sum+=ar[x];
    }

    ll val=sqrt(sum);
    
    if(val*val==sum) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
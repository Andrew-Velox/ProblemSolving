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
    ll a,b,c;
    cin >> a >> b >> c;

    if(a!=b && a!=c) cout << a << endl;
    else if(b!=a && b!=c) cout << b << endl;
    else cout << c << endl;
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
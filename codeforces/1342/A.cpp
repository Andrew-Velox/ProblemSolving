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
    ll int a,b; cin >> a >> b;
    ll int x,y; cin >> x >> y;

    ll int cnt=0,res=0;
    cnt=(min(a,b)*y)+(abs(a-b)*x);
    res=(a+b)*x;

    cout << (cnt<=res ? cnt:res) << endl;
    
}

int main(){
    speed();
    ll int t; cin >> t;
    while(t--) solve();
    return 0;
}
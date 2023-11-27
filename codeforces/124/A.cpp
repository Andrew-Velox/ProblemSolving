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
    int n,a,b; cin >> n >> a >> b;
    
    if(a+b==n) cout << b << endl;
    else if(a==b && a+b>n) cout << n-a << endl;
    else if(a+b>n) cout << abs((b)-((a+b)-n)) << endl;
    else cout << b+1 << endl;
    
}

int main(){
    speed();
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
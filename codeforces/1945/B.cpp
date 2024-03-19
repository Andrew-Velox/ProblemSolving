#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll a,b,c; cin >> a >> b>>c;

    if(max(a,b)==1 && c==1){
        cout << 4 << endl;
        return;
    }
    else if(a==1 && b==1){
        cout << (c*2)+a+b << endl;
        return;
    }
    ll op1=(c)/(max(a,b));
    ll op2=(c)/(min(a,b));
    cout << op1+op2 + 2 << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
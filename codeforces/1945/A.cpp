#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll a,b,c; cin >>a >>b >>c;
    ll cnt=0;
    cnt+=a;

    cnt+=(b*1.0/3);
    ll for_b=0;
    for_b=(b%3);

    if(for_b!=0 && c+for_b<3){
        cout << -1 << endl;
        return;
    }


    ll for_c=0;
    for_c=ceil((for_b*1.0+c*1.0)/3*1.0);

    cout << cnt+for_c << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
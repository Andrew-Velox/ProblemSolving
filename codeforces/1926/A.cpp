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
    string s;
    cin >> s;

    ll cnt_a=0;
    ll cnt_b=0;

    for(int x=0; x<s.size(); x++){
        if(s[x]=='A') cnt_a++;
        else cnt_b++;
    }

    cout << (cnt_a>cnt_b ? "A":"B") << endl;
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
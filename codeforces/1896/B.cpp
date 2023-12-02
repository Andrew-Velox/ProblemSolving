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
    string s; cin >> s;

    ll cnt=len-1;
    int f=0;
    for(int x=0; x<len-1; x++){
        if(s[x]=='A' && s[x+1]=='B'){
            f=1;
            break;
        }
    }
    ll a=0,b=0;
    if(f){
        ll x=len-1;
        while(s[x]!='B'){
            a++;
            x--;
        }

        ll y=0;
        while(s[y]!='A'){
            b++;
            y++;
        }

        cout << cnt-(a+b) << endl;
    }

    else cout << 0 << endl;
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
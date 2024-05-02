#include <bits/stdc++.h>
using namespace std;

#ifdef velox
#include "debug.h"
#else
#define debug(x...)
#endif

#define ll long long
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())
#define unq(v) v.erase(unique(v.begin(),v.end()),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define endl '\n'
#define fx(x) fixed<<setprecision(x)

void error_txt(){
    #ifdef velox
    freopen("error.txt","w",stderr);
    #endif
}

ll dp[1001];

void check(){
    ll a=2;
    ll ans=0;
    for(ll a=2; a<1001; a++){
        for(ll b=1; b<a; b++){
            ll get = __gcd(a,b)+b;
            if(get>ans){
                ans = get;
                dp[a]=b;
            }
        }
    }
}

void solve(){
    ll a; cin >> a;
    
    cout << dp[a] << endl;
    
}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    check();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
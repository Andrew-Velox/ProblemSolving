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


bool isPrime(ll n) {
    if (n == 1) return false;
    
    for(ll i = 2; i*i<=n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

bool isPerfectSquare(ll n) {
    ll x = sqrtl(n);
    return (x*x)==n;
}


void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll x = 0;x < n;x++) cin >> v[x];
    
    for(ll x = 0;x < n;x++){
        
        if(isPrime(sqrtl(v[x])) && isPerfectSquare(v[x])){
            cout << "YES" << '\n';
        }
        else cout << "NO" << '\n';
    }
    
}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
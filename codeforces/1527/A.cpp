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
#define endl "\n"
#define fx(x) fixed<<setprecision(x)

void error_txt(){
    #ifdef velox
    freopen("error.txt","w",stderr);
    #endif
}

const int N = 1e5+10;

vector<ll> dp(N);

vector<ll> bi(int n){
    vector<ll> b;

    while(n>0){
        b.push_back(n%2);
        n/=2;
    }

    rev(b);
    return b;
}


void solve(){
    ll n; cin >> n;
    ll tmp = 0;
    ll sum = 0;
    ll ans = 0;
    
    ll i = 0;
    while(sum <= n){
        tmp=sum;
        sum = 2 << i;
        i++;
    }
    ans = tmp;

    if(n==1){
        cout << 0 << endl;
        return;
    }

    cout << ans-1 << endl;
    debug(ans,i);
    
}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
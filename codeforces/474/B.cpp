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



void solve(){
    ll len; cin >> len;
    vector<ll> v(len);
    ll sum=0;
    for(int x=0; x<len; x++){
        ll val; cin >> val;
        sum+=val;
        v[x]=sum;
    }


    ll q; cin >> q;
    while(q--){
        ll n; cin >> n;

        auto it = lower_bound(v.begin(), v.end(), n);
        it++;
        cout << it-v.begin() << endl;
    }

    
}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
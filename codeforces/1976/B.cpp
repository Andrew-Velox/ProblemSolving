#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) ((x/gcd(x,y))*y)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define endl '\n'
#define fx(x) fixed<<setprecision(x)
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void error_txt(){
    #ifdef velox
    freopen("error.txt","w",stderr);
    #endif
}



void solve(){
    ll len; cin >> len;
    vector<ll> v(len),vv(len+1);

    for(int x=0; x<len; x++) cin >> v[x];
    for(int x=0; x<len+1; x++) cin>> vv[x];

    ll find_between=false;

    ll ans=0;
    ll close=INT_MAX;
    for(int x=0; x<len; x++){
        ll get = abs(v[x]-vv[x]); 
        ans+=get;
        if((v[x]<= vv[len] && vv[x]>=vv[len]) || (v[x]>= vv[len] && vv[x]<=vv[len])){
            find_between=true;
        }
        close=min({close, abs(vv[len]-v[x]), abs(vv[len]-vv[x])});
    }


    if(find_between) cout << ans+1 << endl;
    else cout << ans+1+close << endl;
    


}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
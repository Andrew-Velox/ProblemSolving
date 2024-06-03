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
    ll len, n; cin >> len >> n;

    string s; cin >> s;

    string tmp=s;
    unq(tmp);
    srt(tmp);
    map<char,ll> mp;
    for(int x=0; x<len; x++){
        mp[s[x]]++;
    }

    ll cnt=0;

    for(char x='A'; x<='G'; x++){
        if(mp[x]==0){
            cnt++;
            mp[x]++;
        }
    }

    ll ans=cnt;

    for(char x='A'; x<='G'; x++){
        if(mp[x]<n){
            ans+=(n-mp[x]);
        }
    }


    cout << ans << endl;


    
}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
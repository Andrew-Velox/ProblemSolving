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
    string s; cin >>s;

    map<char,bool> mp;
    string dif="";
    for(int x=0; x<len; x++){
        if(mp[s[x]]==false){
            dif+=s[x];
            mp[s[x]]=true;
        }
    }

    srt(dif);
    map<char,char> mm;

    for(int x=0;x<=dif.size()/2; x++){
        // cout << dif[x] << " " << dif[dif.size()-x-1] << endl;
        mm[dif[x]] = dif[dif.size()-x-1];
        mm[dif[dif.size()-x-1]]=dif[x];

    }

    string ans="";

    for(int x=0; x<len; x++){
        ans+=mm[s[x]];
    }

    cout << ans << endl;


    // cout << dif << endl;
    
}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
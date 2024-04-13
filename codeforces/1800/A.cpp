#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())
#define unq(v) v.erase(unique(v.begin(),v.end()),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define endl "\n"
#define fx(x) fixed<<setprecision(x)

#ifdef velox
#include "debug.h"
#else
#define debug(x...)
#endif

void speed(){
    cin.tie(NULL);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}


void solve(){
    ll len; cin >> len;
    string s; cin >> s;
 
 
    string ss="";
    for(int x=0; x<len; x++) ss+=tolower(s[x]);
 
    unq(ss);
    debug(s,ss);
    
    cout << (ss=="meow" ? "YES":"NO") << endl;
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
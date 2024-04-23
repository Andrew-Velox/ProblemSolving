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
    string s; cin >> s;


    string ans="";

    for(int x=len-1; x>=0; x--){
        if(s[x]=='0'){

            ll get=0;
            get+=(s[x-2]-'0');
            get*=10;
            get+=(s[x-1]-'0');


            ans+=char('a'+(get-1));
            x-=2;

        }

        else ans+=char('a'+((s[x]-'0')-1));
    }
    rev(ans);
    cout << ans << endl;

}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
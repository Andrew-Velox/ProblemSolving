using namespace std;
#include <bits/stdc++.h>

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



void solve(){
    ll len; cin  >> len;


    vector<ll> v(len);
    ll in_sum = 0;
    for(int x=0; x<len; x++){
        cin >> v[x];
        in_sum ^= v[x];
    }
    if(in_sum==0) cout << 0 << endl;
    else{
        int ans=-1;
        for(int x=0; x<=256; x++){
            ll sum = 0;
            for(int y=0; y<len; y++){

                ll tmp = v[y]^x;
                sum ^= tmp;    
            }
            if(sum==0){
                ans=x;
                break;
            }
        }
        
        cout << ans << endl;
    }

    // debug(0^1^2^3);
    
}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
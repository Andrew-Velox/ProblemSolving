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
    ll len,idx,rmv;
    cin >> len >> idx >> rmv;
    vector<ll> v(len);

    for(int x=0; x<len; x++) cin >> v[x];

    ll str = v[idx-1];

    grtsrt(v);
    // debug(v);
    bool maybe=false;
    bool no=false;

    for(int x=0; x<len; x++){
        if(x<rmv && v[x]==str && !no){
            no=true;
            x=rmv-1;
        }
        else if(x>=rmv && no){
            if(v[x]==str){
                maybe=true;
                no=false;
                break;
            }
            else break;
        }
    }

    if(maybe) cout << "MAYBE" << endl;
    else if(no) cout << "YES" << endl;
    else cout << "NO" << endl;



    
    
}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
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
    ll a,b,c,d;
    cin>> a >>b >> c >>d;

    // if(a==b){
    //     if(c==a || d==a)YES;
    //     else NO;
    //     return;
    // }
    // else if(c==d){
    //     if(a==c || b==c)YES;
    //     else NO;
    //     return;
    // }

    if(a>b) swap(a,b);


    vector<ll> v1;
    for(int x=a; x<=b; x++){
        v1.push_back(x);
    }
    vector<ll> v2;
    ll val=0,in=1;
    for(int x=b; x<=12+a; x++){
        val=x;
        if(val>12){
            val=in;
            in++;
        }
        if(in>12)in=1;
        v2.push_back(val);
    }

    if(v1.size()<v2.size()){
        bool c_f=false;
        bool d_f=false;
 
        for(int x=0; x<v1.size(); x++){
            if(c==v1[x]){
                c_f=true;
            }
            else if(d==v1[x]) d_f=true;
        }
 
        if(c_f && d_f || !c_f && !d_f)NO;
        else YES;
    }
    else{
        bool c_f=false;
        bool d_f=false;
 
        for(int x=0; x<v2.size(); x++){
            if(c==v2[x]){
                c_f=true;
            }
            else if(d==v2[x]) d_f=true;
        }
 
        if(c_f && d_f || !c_f && !d_f)NO;
        else YES;
    }
 
    // debug(v1);
    // debug(v2);

    // if(get_abs<get_bk){
    //     if(c<=b && d>=a || a<=c && a>=d) YES;
    //     else NO;
    // }

    
    // if(b<=c && b>=d || a<=c && a>=d) YES;
    // else NO;
    
}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
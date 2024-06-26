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
    ll n; cin >>n;

    // if(n>=1 && n<=3){
    //     for(int x=1; x<=n; x++) cout << x << " ";
    //     cout << endl;
    //     return;
    // }

    ll sum=0;
    for(int x=n; x>=2; x--) sum+=x;

    ll a=(sum/n);
    if(sum%n!=0) a++;
    ll get=(a*n)-sum;
    if(get==0) get=n;

    cout << get << " ";

    for(int x=2; x<=n; x++) cout << x << " ";
    cout << endl;
    
}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
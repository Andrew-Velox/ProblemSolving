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


void solve()
{
    ll n, k, src1, src2;
    cin >> n >> k >> src1 >> src2;
    vector<ll> p(n + 1);
    vector<ll> a(n + 1);

    for (ll i = 1;i <= n;i++) cin >> p[i];
    for (ll i = 1;i <= n;i++) cin >> a[i];
    ll st1 = a[src1];
    ll st2 = a[src2];

    vector<ll>b_path;
    vector<ll>s_path;

    b_path.push_back(src1);
    ll now = src1;
    ll then = p[src1];

    while (then != src1){
        b_path.push_back(then);
        now = then;
        then = p[now];
    }


    s_path.push_back(src2);
    now = src2;
    then = p[src2];
    while (then != src2){
        s_path.push_back(then);
        now = then;
        then = p[now];
    }

    ll age = 0;

    for (ll i = 0;i < b_path.size();i++){
        if (k < i + 1)break;
        
        ll cur = age;
        cur += (k - i) * a[b_path[i]];
        st1 = max(st1, cur);
        age += a[b_path[i]];
    }


    age = 0;

    for (ll i = 0;i < s_path.size();i++){
        if (k < i + 1) break;


        ll cur = age;
        cur += (k - i) * a[s_path[i]];
        st2 = max(st2, cur);
        age += a[s_path[i]];
    }

    if (st1 > st2)cout << "Bodya" << endl;
    else if (st1 == st2) cout << "Draw" << endl;
    else cout << "Sasha" << endl;


}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
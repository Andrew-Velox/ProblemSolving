#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define pi pair<int,int>
#define pll pair<ll,ll>

#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())
#define rev(v) reverse(v.begin(),v.end());
#define endl "\n"
#define fx(x) fixed<<setprecision(x)

void speed(){
    cout.tie(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
}

void solve(){
    ll len,w;
    cin >> len >> w;

    vll v(len);

    for(int x=0; x<len; x++) cin >> v[x];

    sort(v.begin(),v.end());

    int val=1;
    for(int x=0; x<w; x++) val=v[x];

    if(len==w) cout << v[len-1] << endl;
    else if(val<v[w]) cout << val << endl;
    else cout << -1 << endl;


}


int main(){
    speed();
    ll t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
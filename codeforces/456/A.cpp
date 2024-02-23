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
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve(){
    ll n; cin >> n;

    vll v(n+1);

    for(int x=0; x<n; x++){
        ll a,b; cin >> a >>b;
        v[a]=b;
    }

    bool f=false;
    for(int x=1; x<=n-1; x++){
        if(v[x]  > v[x+1]){
            f=true;
            break;
        }
    }

    cout << (f ? "Happy Alex" : "Poor Alex") << endl;
    
}

int main(){
    speed();
    ll t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
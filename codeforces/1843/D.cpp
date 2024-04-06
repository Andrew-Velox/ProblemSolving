#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())
#define rev(v) reverse(v.begin(),v.end());
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define endl "\n"
#define fx(x) fixed<<setprecision(x)

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<":- "<<x<<" "<< endl;
#define debug2(x,y) cerr<<#x<<":- "<<x<<" | "<<#y<<":- "<<y<<endl;
#define debug3(x,y,z) cerr<<#x<<":- "<<x<<" | "<<#y<<":- "<<y<<" | "<<#z<<":- "<<z<<endl;
#else
#define debug(x)
#define debug(x,y)
#define debug(x,y,z)
#endif

void error_txt(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt","w",stderr);
    #endif
}
void speed(){
    cin.tie(NULL);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}


const ll N=2*(1e5+10);
vector<ll> v[N];
bool vis[N];
ll par[N];


void dfs(ll var, ll f){
    
    if(v[var].size()==1 && f) par[var]=1;
    else par[var]=0;

    // cout << var << " ";

    for(int x: v[var]){
        if(x!=f){
            dfs(x,var);
            par[var]+=par[x];

        }
    }
}

void solve(){

    ll var; cin >> var;

    for(int x=1; x<var; x++){
        ll a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1,0);


    ll q; cin >> q;

    while(q--){
        ll x,y;
        cin >> x >> y;

        cout << par[x]*par[y] << endl;

    }

    for(int x=1; x<=var; x++){
        par[x]=0;
        v[x].clear();
    }

}

int main(){
    // error_txt();
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
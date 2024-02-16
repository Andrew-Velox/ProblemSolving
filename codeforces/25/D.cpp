#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fx(x) fixed<<setprecision(x)
using namespace std;

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

ll par[20010];
ll sz[20010];

void init(ll n){
    for(int x=1; x<=n; x++){
        par[x]=-1;
        sz[x]=1;
    }
}

ll find(ll node){
    if(par[node]==-1) return node;
    return par[node]=find(par[node]);
}

void uni(ll n1, ll n2){
    ll ledA=find(n1);
    ll ledB=find(n2);

    if(sz[ledA] < sz[ledB]){
        par[ledA]=ledB;
        sz[ledB]+=sz[ledA];
    }
    else{
        par[ledB]=ledA;
        sz[ledA]+=sz[ledB];
    }
}

void solve(){
    ll n;
    cin >> n;
    
    init(n);
    vector<pair<ll,ll>> cycle_nodes;
    vector<pair<ll,ll>> connect_nodes;

    //finding extra edges
    for(int x=1; x<n; x++){
        ll a,b;
        cin >> a >> b;
        ll ledA=find(a);
        ll ledB=find(b);
        if(ledA==ledB){
            cycle_nodes.push_back({a,b});
        }
        else{
            uni(a,b);
        }

    }

    // connecting edges
    for(int x=2; x<=n; x++){

        ll ledA=find(1);
        ll ledB=find(x);
        if(ledA!=ledB){
            uni(1,x);
            connect_nodes.push_back({1,x});
        }
       
    }
    cout << cycle_nodes.size() << endl;

    for(int x=0; x<cycle_nodes.size(); x++){
        cout << cycle_nodes[x].first << " " << cycle_nodes[x].second << " " << connect_nodes[x].first << " " << connect_nodes[x].second << endl;
    }
    
}

int main(){
    speed();
    ll t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
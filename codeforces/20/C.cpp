#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fx(x) fixed<<setprecision(x)
using namespace std;

const ll N=1e5+10;

ll par[N];
vector<pair<ll,ll>> vi[N];
ll dis[N];

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

class cmp{
    public:

    bool operator()(pair<ll,ll> a, pair<ll,ll> b){
        return a.second > b.second;
    }
};

void dijkstra(ll st){
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, cmp> pq;

    pq.push({st,0});
    dis[st]=0;

    while(!pq.empty()){
        pair<ll,ll> parnt=pq.top();
        pq.pop();
        ll par_node=parnt.first;
        ll par_cost=parnt.second;

        for(pair<ll,ll> chld: vi[par_node]){
            ll child_node=chld.first;
            ll child_cost=chld.second;

            if(par_cost+child_cost < dis[child_node]){
                dis[child_node]=par_cost+child_cost;
                pq.push({child_node, dis[child_node]});
                par[child_node]=par_node;
            }
        }
    }
}

void solve(){
    ll n,e;
    cin >> n >> e;

    for(ll x=1; x<=n; x++){
        dis[x]=1e18;
        par[x]=-1;
    }

    while(e--){
        ll a,b,c;
        cin >> a >> b >> c;

        vi[a].push_back({b,c});
        vi[b].push_back({a,c});
    }

    

    dijkstra(1);

    if(dis[n]==1e18) cout << -1 << endl;

    else{
        ll d=n;

        vector<ll> ans;

        while(d!=-1){

            ans.push_back(d);
            d = par[d];
        }

        reverse(ans.begin(), ans.end());

        for(ll val: ans){
            cout << val << " ";
        }
        cout << endl;

    }

    
}

int main(){
    speed();
    ll t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
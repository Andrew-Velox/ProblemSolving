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
const ll N=(2*1e5)+10;
vector<ll> vi(N+5,0);

void sums(){

    for(ll x=1; x<=N; x++){
        ll sum=0;
        ll tmp=x;
        
        while(tmp>0){
            sum+=tmp%10;
            tmp/=10;
        }
        vi[x]=vi[x-1]+sum; 
    }
}

void solve(){
    ll n;
    cin >> n;

    cout << vi[n] << endl;
    
}

int main(){
    speed();
    sums();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
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
    vll vl;

    for(int x=0; x<n; x++){
        ll val; cin >> val;
        vl.push_back(val);
    }

    srt(vl);

    vll ans(n);
    ll i=0;


    for(int x=1; x<n; x+=2){
        ans[x]=vl[i];
        i++;
    }
    for(int x=0; x<n; x+=2){
        ans[x]=vl[i];
        i++;
    }

    ll cnt=0;
    for(int x=1; x<ans.size()-1; x++){
        if(ans[x]<ans[x+1] && ans[x-1] > ans[x]) cnt++;
    }

    cout << cnt << endl;
    for(int val: ans) cout << val << " ";

    cout << endl;

}

int main(){
    speed();
    ll t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
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
    int len; cin >> len;
    vi v(len);

    for(int x=0; x<len; x++) cin >> v[x];
    // for(int val: v) cout << val << " ";

    int ans=INT_MIN;

    for(int x=0; x<len; x++){
        int back_cnt=0;
        int front_cnt=1;

        for(int y=x; y<len-1; y++){
            if(v[y] < v[y+1]) break;
            front_cnt++;
        }

        for(int y=x; y>=1; y--){
            if(v[y-1]>v[y]) break;
            back_cnt++;
        }

        ans=max(ans,back_cnt+front_cnt);
    }

    cout << ans << endl;
    
}

int main(){
    speed();
    ll t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
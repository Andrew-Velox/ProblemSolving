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
    ll len;
    cin >> len;

    ll ar[len];

    ll sum=0;

    for(int x=0; x<len; x++){
        cin >> ar[x];
        sum+=ar[x];
    }

    if(sum%3==0) cout << 0 << endl;
    else{
        // ll ans = sum/2;

        int a,b;

        if((sum+1)%3==0) cout << 1 << endl;
        else{
            bool ans=false;
            for(int x=0; x<len; x++){
                int temp=sum;
                if((temp-ar[x])%3==0){
                    ans=true;
                    break;
                }
            }

            if(ans) cout << 1 << endl;
            else cout << 2 <<endl;
        }
    }
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
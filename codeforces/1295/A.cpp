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
    ll n; cin>>n;

    if(n%2==0){
        ll dev=n/2;
        for(int x=0; x<dev; x++) cout << 1;
        cout << endl;
    }
    else{
        cout<<7;
        ll dev=(n-3)/2;
        for(int x=0; x<dev; x++) cout << 1;
        cout << endl;
    }
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
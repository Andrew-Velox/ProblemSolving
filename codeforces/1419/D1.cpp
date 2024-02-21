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

    if(n%2==0) cout << (n/2)-1 << endl;
    else cout << floor(n/2) << endl;

    srt(vl);

    ll i=0,j=n-1;
    while(i<=j){
        if(i==j){
            cout << vl[j] << " ";
            i++;
            j--;
            continue;
        }
        cout << vl[j] << " " << vl[i] << " ";
        i++;
        j--;
    }

    cout << endl;

}

int main(){
    speed();
    ll t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
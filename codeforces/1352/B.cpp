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
    ll n,k;
    cin >> n >> k;
 
    vi ans;
    
    if(k%2==1 && n%2==0){
        while(k>1){
            ans.push_back(2);
            n-=2;
            k--;
        }
 
        if(n%2!=0 || n<=0) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            cout << n << " ";
            for(int val: ans) cout << val <<" ";
            cout << endl;
        }
    }
    else{
        while(k>1){
            ans.push_back(1);
            n-=1;
            k--;
        }
 
        if(n%2!=1 || n<0) cout << "NO" << endl;
        else{
            if(n)
            cout << "YES" << endl;
            cout << n << " ";
            for(int val: ans) cout << val <<" ";
            cout << endl;
        }
    }
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
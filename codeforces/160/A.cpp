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

void solve(){
    int len; cin >> len;
    vector<int> ar(len);

    int sum=0;
    for(int x=0; x<len; x++){
        cin >> ar[x];
        sum+=ar[x];
    }
    sort(ar.begin(),ar.end(),greater<int>());

    int cnt=0;
    int rs=ceil(sum/2.0);

    for(int x=0; x<len; x++){
        if(sum<rs) break;
        sum-=ar[x];
        cnt++;
    }
    cout << cnt << endl;

}

int main(){
    speed();
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
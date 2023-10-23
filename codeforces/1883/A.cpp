#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve(){
    string s; cin >> s;
    int ar[4];
    for(int x=0;x<4;x++) ar[x]=s[x]-'0';


    ll int cnt=0,q=0;
    for(int x=0; x<4; x++){
        if(ar[x]==0) ar[x]=10;

        if(ar[0]==1 && q==0){
            cnt++;
            q=1;
            continue;
        }
        else if(ar[0]!=1 && q==0){
            cnt+=ar[x];
            q=1;
            continue;
        }
        else{
            cnt+=abs(ar[x-1]-ar[x])+1;
            continue;
        }
    }
    
    cout << cnt << endl;
    
}

int main(){
    speed();
    ll int t; cin >> t;
    while(t--) solve();
    return 0;
}
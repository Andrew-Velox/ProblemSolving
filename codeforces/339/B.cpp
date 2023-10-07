#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll int a,len; cin >> a >> len;
    ll int ar[len];
    for(int x=0; x<len; x++) cin >> ar[x];

    ll int cnt=ar[0]-1;
    for(int x=0; x<len-1; x++){
        if(ar[x]<ar[x+1]) cnt+=(ar[x+1]-ar[x]);
        else if(ar[x]>ar[x+1]) cnt+=a-(ar[x]-ar[x+1]);
    }
    cout << cnt << endl;
}

int main(){
    ll int t=1;
    while(t--){
        solve();
    }
    return 0;
}
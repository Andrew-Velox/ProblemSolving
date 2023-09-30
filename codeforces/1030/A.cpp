#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
   int len,n; cin >> len;
   int cnt=0;
   for(int x=0; x<len; x++){
        cin >> n;
        if(n==1) cnt=1;
   }
   cout << (cnt ? "HARD" : "EASY") << endl;
}

int main(){
    ll int t=1;// cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}
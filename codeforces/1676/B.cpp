#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t; cin >> t;
    
    while(t--){
        ll int len; cin >> len;
        ll int ar[len];

        int sml = INT_MAX;
        for(int x=0; x<len; x++){
            cin >> ar[x];
            if(ar[x]<sml) sml=ar[x];
        }

        ll int res=0;
        for(int x=0; x<len; x++){
            if(sml!=ar[x]) res+=(ar[x]-sml);
        }
        cout << res << endl;
    }
    return 0;
}
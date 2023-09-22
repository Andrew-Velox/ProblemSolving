#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t; cin >> t;

    while(t--){
        ll int siz; cin >> siz;
        int ar[siz];

        for(int x=0; x<siz; x++) cin >> ar[x];
        sort(ar, ar+siz);

        int cnt=0;
        for(int x=0; x<siz; x++){
            cnt+=abs(ar[x]-ar[siz-1]);
            siz--;
        }
        cout << cnt << endl;
    }
    return 0;
}
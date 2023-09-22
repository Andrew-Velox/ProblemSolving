#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t; cin >> t;

    while(t--){
        ll int siz; cin >> siz;

        int a,b,cnt=0;
        for(int x=0; x<siz; x++){
            cin >> a >> b;
            if(a-b>0) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
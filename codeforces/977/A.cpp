#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int a,b; cin >> a >> b;
    ll int res=a;
    while(b--){
        ll int last_dig=res%10;
        if(last_dig==0) res/=10;
        else res-=1;
    }
    cout << res << endl;
    return 0;
}

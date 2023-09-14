#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t,res,n,m;
    cin >> t;
    
    while(t--){

        cin >> n >> m;

        res = n*m;

        if(res%2==0){
            ll int ans = res/2;
            cout << ans << endl;
        }
        else{
            res++;
            ll int ans = res/2;
            cout << ans << endl;
        }
    }

    return 0;
}
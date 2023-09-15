#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t; cin >> t;

    while(t--){
        ll int a,b;
        cin >> a >> b;
        
        if(a%2==0 && b%2==0 && a>=b*b || a%2==1 && b%2==1 && a>=b*b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
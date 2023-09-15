#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t;
    cin >> t;


    while(t--){
        ll int a,b;
        cin >> a >> b;

        if(a==b) cout << 0 << endl;
        else if(a%2==0 && b%2==1 && a<b ) cout << 1 << endl;
        else if(a%2==0 && b%2==1 && a>b) cout << 2 << endl;
        else if(a%2==0 && b%2==0 && a<b || a%2==1 && b%2==1 && a<b ) cout << 2 << endl;
        else if(a%2==1 && b%2==0 && a>b) cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
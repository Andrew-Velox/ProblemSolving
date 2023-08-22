#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int n; cin >> n;
    int sum;
    for (int i = 0; i < n; i++){
       int x;
       cin >> x;
       sum+=x;
    }
    
    cout << sum << endl;
    return 0;
}
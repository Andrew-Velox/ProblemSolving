#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll int a,b,c;
    cin >> a >> b >> c;
    int sum = 0;
    for(ll int x=1; x<=c; x++){
        sum += a*x;
    }

    if(sum>b){
        cout << sum-b << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}
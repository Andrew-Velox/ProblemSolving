#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    ll array[t];
    for(int x=0; x<t; x++){
        cin >> array[x];
    }
    
    double sum=0;
    for(int x=0; x<t; x++){
        sum += array[x];
    }

    double res = sum/t;

    cout << fixed << setprecision(12) << res << endl;
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll int a,b,count=0;
    cin >> a >> b;

    while(a<=b){
        a*=3;
        b*=2;
        count++;
    }

    cout << count << endl;
    return 0;
}
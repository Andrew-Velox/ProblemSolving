#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int x,a,b; cin >> a >> b;
    ll int temp=a;
    
    x=5;
    int res=0;
    while(b<=240){
        b+=x;
        x+=5;
        res++;
    }
    cout << (res-1<temp ? res-1:temp) << endl;
    return 0;
}

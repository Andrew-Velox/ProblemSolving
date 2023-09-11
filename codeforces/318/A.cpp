#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int a,b,mid;
    cin >> a >> b;

    if(a%2==0){
        mid = a/2; 
        
    }
    else{
        mid = (a+1)/2; 
    }

    if(b<=mid){
        cout << (b*2)-1 << endl;
    }
    else{
        cout << (b-mid)*2 << endl;
    }
    return 0;
}
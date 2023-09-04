#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int f,h;
    cin >> f >> h;

    ll int ar[f];
    for(int x=0; x<f; x++){
        cin >> ar[x];
    }
    ll int big = 0, small = 0;
    for(int x=0; x<f; x++){
        if(ar[x]>h){
            big+=2;
        }
        else{
            small+=1;
        }
    }
    
    cout << big+small << endl;
    return 0;
}
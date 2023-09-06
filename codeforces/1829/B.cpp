#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int k;
    cin >> k;
    
    while(k--){
        ll int t;
        cin >> t;
        ll int ar[t];
        for(int x=0; x<t; x++){
                cin >> ar[x];
            }
        ll int c=0;
        ll int val = 0;
        for(int x=0; x<t; x++){
            if(ar[x]==0){
                c++;
                }
            else{
                c = 0;
                }
            if(val<c){
                val = c;
                }
            
        }
        
        cout << val << endl;
        
    }
    return 0;
}
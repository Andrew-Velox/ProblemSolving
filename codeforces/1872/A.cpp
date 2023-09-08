#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll int t;
    cin >> t;
    
    while(t--){
        ll int a,b,c;
        cin >> a >> b >> c;
        
        if(a<b){
            ll int count = 0;
            while(a!=b){
                b = b-c;
                a = a+c;
                count++;
                if(a>b){
                    a=b;
                }
            }
            
            cout << count << endl;
        }
        
        
        else if(b<a){
            ll int count = 0;
            while(a!=b){
                a =a-c;
                b = b+c;
                count++;
                if(b>a){
                    a=b;
                }
            }
            
            cout << count << endl;
        }
        
        else{
            cout << 0 << endl;
            }
            
    }
    return 0;
}
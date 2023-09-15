// ALHAMDULILLAH // 
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t; cin >> t;

    while(t--){
        int b,c,h; cin >> b >> c >> h;
        
        int bt = b;
        int ct=c;
        int ht=h;
        if(b>=c && b>=h){

            int cnt = 0;
            while(c>0 && b>0){
                if(b==bt){
                    b-=2;
                }
                else b--;
                if(cnt==0){
                    cnt+=3;
                }
                else cnt+=2;
                c--;
            }
            while(h>0 && b>0){
                b--;
                cnt+=2;
                h--;
            }
            cout << cnt << endl;
        }
        else{
            int a=bt;
            int cnt=0;
            while(bt<ct && bt>0){
                if(bt==a){
                    bt-=2;
                }
                else bt--;
                if(cnt==0) cnt+=3;
                else cnt+=2;
            }

            while(bt<ht && bt>0){
                if(bt==a){
                    bt-=2;
                }
                else bt--;
                if(cnt==0) cnt+=3;
                else cnt+=2;

            }

            cout << cnt << endl;
        }

    }
    return 0;
}
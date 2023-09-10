#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    
    int cnt = 0;
    int pol = 0;
    while(n--){
        ll int cp;
        cin >> cp;

        if(cp==-1 && pol==0){
            cnt++;
        }

        else if(cp==-1 && pol>0){
            pol+=cp;
        }
        else if(cp!=-1){
            pol+=cp;
        }

        //cout << "cp:" << cp  << " " << "pol: " << pol << " " << "cnt: " << cnt <<endl;
        
    }
    cout << cnt << endl;
    return 0;
}
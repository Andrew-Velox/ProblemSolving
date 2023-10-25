#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}


void solve(){
    ll int len; cin >> len;
    ll int ar[len];

    for(int x=0; x<len; x++) cin>> ar[x];

    ll int alice=ar[0],bob=0,a_cnt=ar[0],b_cnt=0;
    ll int i=1, j=len-1,cnt=1,turn=1;

    while(i<=j){

        cnt++;

        if(turn==1){
            turn=0;
            b_cnt=0;
            while(b_cnt<=a_cnt){
                b_cnt+=ar[j];
                bob+=ar[j];
                j--;
                if(j<i) break;
            }
            //cout << "b_cnt: " << b_cnt << " |";
        }
        
        else{
            turn = 1;
            a_cnt=0;
            while(b_cnt>=a_cnt){
                a_cnt+=ar[i];
                alice+=ar[i];
                i++;
                if(i>j) break;
            }
            //cout << "a_cnt: " << a_cnt << endl;
        }
    }

    cout << cnt << " " << alice << " " << bob << endl;
}

int main(){
    speed();
    ll int t; cin >> t;
    while(t--) solve();
    return 0;
}
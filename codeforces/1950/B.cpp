#include <bits/stdc++.h>
#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define endl "\n"
using namespace std;

void solve(){
    ll n; cin>> n;

    ll a=0,b=0,cnt=0,tm=0;

    if(n%2==1){
        for(int x=0; x<n*2; x++){
            for(int y=0; y<n*2; y++){

                    if(cnt<(n*2)*2){
                        cnt++;
                        if(a<2){
                            cout << "#";
                            a++;
                            if(a==2) b=0;            
                        } 
                        else if(b<2){
                            cout << ".";
                            b++;
                            if(b==2) a=0;
                        }
                        if(y==(n*2)-1){
                            a=0;
                            b=2;
                        }
                    }

                    else{
                        cnt++;
                        if(a<2){
                            cout << ".";
                            a++;
                            if(a==2) b=0;            
                        } 
                        else if(b<2){
                            cout << "#";
                            b++;
                            if(b==2) a=0;
                        }
                        if(y==(n*2)-1){
                            a=0;
                            b=2;
                        }

                        if(cnt==(n*2)*4) cnt=0;
                    }
                }
                cout<< endl;
                
            }

    }

    else{
        for(int x=0; x<n*2; x++){
            for(int y=0; y<n*2; y++){

                if(cnt<(n*2)*2){
                    cnt++;
                    if(a<2){
                        cout << "#";
                        a++;
                        if(a==2) b=0;            
                    } 
                    else if(b<2){
                        cout << ".";
                        b++;
                        if(b==2) a=0;
                    }
                }

                else{
                    cnt++;
                    if(a<2){
                        cout << ".";
                        a++;
                        if(a==2) b=0;            
                    } 
                    else if(b<2){
                        cout << "#";
                        b++;
                        if(b==2) a=0;
                    }

                    if(cnt==(n*2)*4) cnt=0;
                }
            }
            cout<< endl;
            
        }
    }

    // cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t,x,y;
    cin >> t;

    while(t--){
        char ar[10][10];

        for(x=0; x<10; x++){
            for(y=0; y<10; y++){
                cin >> ar[x][y];
            }
        }

        int a=0,b=0,c=0,d=0,e=0;
        for(x=0; x<10; x++){
            for(y=0; y<10; y++){
                if('X'==ar[x][y]){
                    if(x==0 || x==9 || y==0 || y==9) a+=1;
                    else if( x==1 || x==8 || y==1 || y==8) b+=2;
                    else if(x==2 || x==7 || y==2 || y==7) c+=3;
                    else if(x==3 || x==6 || y==3 || y==6) d+=4;
                    else e+=5;
                    }
                
            }
        }

        cout << a+b+c+d+e << endl;
    }
    return 0;
}
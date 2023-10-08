#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string in;
    int a=0,b=0,c=0;
    for(int x=0; x<3; x++){
        cin >> in;
        if(in[0]=='A' && in[1]=='>' && in[2]=='B' || in[0]=='A' && in[1]=='>' && in[2]=='C' || in[0]=='B' && in[1]=='<' && in[2]=='A' || in[0]=='C' && in[1]=='<' && in[2]=='A') a++;


        if(in[0]=='B' && in[1]=='>' && in[2]=='A' || in[0]=='B' && in[1]=='>' && in[2]=='C' || in[0]=='A' && in[1]=='<' && in[2]=='B' || in[0]=='C' && in[1]=='<' && in[2]=='B') b++;

        if(in[0]=='C' && in[1]=='>' && in[2]=='A' || in[0]=='C' && in[1]=='>' && in[2]=='B' || in[0]=='A' && in[1]=='<' && in[2]=='C' || in[0]=='B' && in[1]=='<' && in[2]=='C') c++;
        
    }
    int o = min(a,min(b,c));
    int oo = max(a,max(b,c));
    if(o==0 && oo==2){
        if(a==0) cout << "A";
        else if(b==0) cout << "B";
        else if(c==0) cout << "C";
        if(a==1) cout << "A";
        else if(b==1) cout << "B";
        else if(c==1) cout << "C";
        if(a==2) cout << "A";
        else if(b==2) cout << "B";
        else if(c==2) cout << "C";
        cout << endl;
    }
    else cout << "Impossible" << endl;

    
}
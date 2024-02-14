#include <iostream>
using namespace std;
int main()
{

    string s;
    cin >> s;
    bool f = false;
    string ss = "aieou";
    
    int sz = s.size();
    bool lst_v=false;
    
    for(int x=0; x<ss.size(); x++){
        if (s[sz-1] == ss[x])
            {
                lst_v = true;
                //break;
            }
      
        
    }
    
    if (!lst_v && s[sz-1] != 'n'){
        cout << "NO" << endl;
        return 0;
    }
        
    
    if (s.size() == 1)
    {
        for (int i = 0; i < ss.size(); i++)
        {
            if (s[0] == ss[i])
            {
                f = true;
                break;
            }
        }
        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (s[0] != 'n')
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
    }
    else
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            bool v = false;
            bool vv = false;

            for (int j = 0; j < ss.size(); j++)
            {
                if (s[i] == ss[j])
                {
                    v = true;
                    //break;
                }
                if (s[i + 1] == ss[j])
                {
                    vv = true;
                    //break;
                }
            }
            if (!v && !vv && s[i] != 'n')
            {
                f = true;
                break;
            }
        }
        if (!f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
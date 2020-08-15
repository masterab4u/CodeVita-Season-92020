#include <bits/stdc++.h>
using namespace std;
                     
#define int long long
#define endl '\n'

int getval(int x)
{
    for(int var=2;var*var<=x;var++)
    {
        if(x%var==0)return x/var;
    }
    return 1;
}

void solver()
{   
    int x, y;
    cin>> x >>y;
    if(x<y)swap(x,y);
    if(x==y)
        {
            cout<<0;
            return;
        }
    map<int,int> m;
    
    int c=0;
    while(x!=1)
    {
        c++;
        x=getval(x);
        m[x]=c;
    }
    
    c=0;
    while(!m.count(y))
    {
        c++;
        y=getval(y);
    }
    cout<<c+m[y];
}


int32_t main()
{   
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solver();
    return 0;
}  
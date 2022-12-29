#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll R,C;
    cin>>R>>C;

    if(C>R)
    {
       if(C%2==1)
       cout<<((C*C)-R+1)<<endl;
       else
       cout<<((C-1)*(C-1) + R)<<endl;
    }
    else
    {
        if(R%2==1)
        cout<<((R-1)*(R-1) + C)<<endl;
        else
        cout<<((R*R)-C+1)<<endl;
    }
}

int main(){
    ll T;
    cin>>T;
    while(T--)
    {
        solve();
    }
}

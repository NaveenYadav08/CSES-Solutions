#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll K)
{
    if(K==1)
    cout<<0<<endl;
    else if(K==2)
    cout<<6<<endl;
    else
    {
        ll Totalways = ((K*K)*(K*K - 1))/2; // n^2 C 2 combinations
        ll Attackways = 4*(K-1)*(K-2); // make 2*3 or 3*2 rectangle and at each rectanlge 2 attacks possible

        cout<<Totalways-Attackways<<endl;
    }
}


int main(){
    ll T;
    cin>>T;
    ll K = 1;
    while(K<=T)
    {
        solve(K);
        K++;
    }
}

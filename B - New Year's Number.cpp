#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

void solve()
{
    int n;
    cin>>n;
    int dig = n%10;
    n = n-2021*dig;
    if(n < 0)
    {
        cn;
        return;
    }
    if(n%2021 == 0)
    {
        cy;
        return;
    }
    if(n%2020 == 0)
    {
        cy;
        return;
    }
    for(int i=1; i*2020<=n; i++)
    {
        ll a = (n-i*2020);
        if(a%2021 == 0)
        {
            cy;
            return;
        }
    }
    cn;
}

int main()
{
    fast;
    int t;
    cin>>t;
    w(t)
    {
        solve();
    }
    return 0;
}

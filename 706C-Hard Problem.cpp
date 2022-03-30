#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define inf 1000000000000000
int main()
{
    ll i,j,k;
    ll n,m,x;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    string s[n],r[n];
    ll dp[n][2];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        r[i]=s[i];
        reverse(r[i].begin(),r[i].end());
        dp[i][0]=inf; dp[i][1]=inf;
    }
    dp[0][0]=0;
    dp[0][1]=a[0];
    for(i=1;i<n;i++)
    {
        if(s[i-1]<=s[i])
        {
            dp[i][0]=dp[i-1][0];
        }
        if(s[i]>=r[i-1])
        {
            dp[i][0]=min(dp[i][0],dp[i-1][1]);
        }
        if(r[i]>=s[i-1])
        {
            dp[i][1]=dp[i-1][0]+a[i];
        }
        if(r[i]>=r[i-1])
        {
            dp[i][1]=min(dp[i][1],dp[i-1][1]+a[i]);
        }
    }
    x = min(dp[n-1][0],dp[n-1][1]);
    if(x==inf)
    {
        cout<<"-1";
    }
    else
    {
        cout<<x;
    }
    return 0;
}

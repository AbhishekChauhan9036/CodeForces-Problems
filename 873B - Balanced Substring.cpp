#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
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

const int INF = 0x3f3f3f3f;
int Min[200005];
char s[100005];
int main()
{
    int n,sum,len,ans;
    cin>>n;
    scanf("%s",s+1);
    sum = n;
    ans = 0;
    len = strlen(s+1);
    memset(Min,INF,sizeof(Min));
    Min[sum] = 0;
    for(int i = 1; i <= len; i++)
    {
        if(s[i] == '0') 
            sum--;
        else 
            sum++;
        Min[sum] = min(Min[sum] , i);
        ans = max(ans , i-Min[sum]);
    }
    co(ans);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
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

long long first[1010000], last[1010000];
int main()
{
    string arr;
    cin >> arr;
    lli ln = arr.size();
    lli cnt = 0;
    for(lli i = 1; i <= ln - 1; i++)
    {
        if(arr[i] == 'v' && arr[i - 1] == 'v') 
            cnt++;
        first[i] = cnt;
    }
    cnt = 0;
    for(lli i = ln - 1; i > 0; i--)
    {
        if(arr[i] == 'v' && arr[i + 1] == 'v') 
            cnt++;
        last[i] = cnt;
    }
    lli ans = 0;
    for(lli i = 0; i < ln; i++)
    {
        if(arr[i] == 'o')
        {
            ans += first[i - 1] * last[i + 1];
        }
    }
    cout << ans << endl;
}

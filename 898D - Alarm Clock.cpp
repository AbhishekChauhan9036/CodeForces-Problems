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

int main() 
{
    fast
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    input(a,n)
    sa(a,n);
    set<int> st;
    int ans = 0;
    ff(i,0,n-1)
    {
        set<int>::iterator itr;
        itr = st.begin();
        while(st.size() != 0)
        {
            if(*itr < a[i]-m+1)
            {
                st.erase(*itr);
                itr++;
            }
            else
            {
                break;
            }
        }
        if(st.size() < k-1)
        {
            st.insert(a[i]);
        }
        else
        {
            ans++;
        }
    }
    cout<<ans;
	return 0;
}

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
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())
#define N 111

int main() 
{
	int n,i,j,b=-1,x=0,t,k,count=1,d=0;
	cin>>n>>k;
	int a[n],c[100001]={0};
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    c[a[i]]++;
	    if(i==0)
	    {
	        continue;
	    }
	    if(c[a[i]]==1)
	    {
	        count++;
	    }
	    if(count==k && d==0)
	    {
	        b=i;
	        break;
	    }
	    if(count==1 && a[i]==a[i-1])
	    {
	        x++;
	        c[a[i]]--;
	    }
	}
	if(k==1)
	{
	    cout<<"1 1";
	}
	else if(b>0)
	{
	    for(i=x;i<b;i++)
	    {
	        if(c[a[i]]>1)
	        {
	            x++;
	            c[a[i]]--;
	        }
	        else
	        {
	            break;
	        }
	    }
	    cout<<x+1<<" "<<b+1;
	}
	else 
	{
	    cout<<"-1 -1";
	}
	return 0;
}

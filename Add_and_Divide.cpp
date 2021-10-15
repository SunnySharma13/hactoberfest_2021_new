#pragma GCC optimize ("trapv")
#include <bits/stdc++.h>
#include<algorithm>
#include <vector>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<cstdlib>
#include<sstream>
#include <string.h>
using namespace std;
#define pb push_back
#define all(v) v.begin(),v.end()
#define  rep(i,n,v) for(i=n;i<v;i++)
#define per(i,n,v) for(i=n;i>v;i--)
#define ff first 
#define ss second 
#define pp pair<ll,ll>
#define ll  long long
#define ld  long double
#define endl "\n"
 
const ll mod=1e9+7;
void solve()
{
ll  n, a=0,b=0,m=1, c=-1,k=0, i=0, j=0, l=1e9+5;
string s,p, q;
    cin>>n>>a;
    map<ll,ll>mp;
    mp[n]++;
    while(1){
        ll lcm=(n*a)/__gcd(n,a);
        n=lcm/a;
        if(lcm/a==1){
            cout<<"YES"<<endl;
         return;
        }
        if(mp[lcm/a]>0){
            cout<<"NO"<<endl;
            return;

        }
        mp[lcm/a]++;
    }
    // b=__gcd(n,a);
    // if(n==1 || a==1) {
    //     cout<<"YES"<<endl;
    //     return;
    // }
    // if(b==1) cout<<"NO"<<endl;
    // else cout<<"YES"<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin. tie(0);cout. tie(0);
ll t=1;
cin>>t;
while(t--)
{
solve();
}
return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
int setbit(int x)
{
    int c=0;
    while(x)
    {
        if(x&1)
        c++;
        x=x>>1;
    }
    return c;
}
	int is_bleak(int n)
	{
	    if(n==0)
	    return 1;
	   int y=n;
	   while(y--)
	   {
	      int a=setbit(y); 
	      if(y+a==n)
	      return 0;
	   }
	   return 1;
	}
};
int main(){
    
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    
	return 0;
}

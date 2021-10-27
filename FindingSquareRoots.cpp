// problem link - https://www.codechef.com/problems/FSQRT

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int num, res;
        cin >> num;
        res = sqrt(num);
        cout << res << endl;
    }
    return 0;
}

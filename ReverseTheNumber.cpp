// Problem Link  - https://www.codechef.com/problems/FLOW007

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int num, rem;
        int sum = 0;
        cin >> num;
        while(num>0)
        {
            rem = num%10;
            sum = sum*10 + rem;
            num = num/10;
        }
        cout << sum << endl;
    }
    return 0;
}

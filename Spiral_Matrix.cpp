#include<bits/stdc++.h>
using namespace std;

/*
Given a matrix of size N x M.
You have to find the Kth element
which will obtain while traversing
the matrix spirally starting from
the top-left corner of the matrix.

Example 1:

Input:
N = 3, M = 3, K = 4
A[] = {{1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}}
Output:
6
*/


class Solution {

public:
    int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        int cnt = 1;
        int size = 0, up = 0, down = n - 1, left = 0, right = m - 1;
        while (size < (n * m)) {

            for (int j = left; j <= right; ++j) {
                if (cnt == k) return a[up][j];
                cnt++;
            }

            for (int i = up + 1; i <= down; ++i) {
                if (cnt == k) return a[i][right];
                cnt++;
            }

            for (int j = right - 1; j >= left; --j) {
                if (cnt == k) return a[down][j];
                cnt++;
            }

            for (int i = down - 1; i > up; --i) {
                if (cnt == k) return a[i][left];
                cnt++;
            }
            size = cnt;
            up++, left++, down--; right--;
        }
        return -1;
    }
};

int main()
{
    int n, m;
    int k = 0;
    cin >> n >> m >> k;
    vector<vector<int>> a(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    Solution obj;

    cout << obj.findK(a, n, m, k) << "\n";
}

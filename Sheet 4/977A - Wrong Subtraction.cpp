//https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w, c = 0, sum = 0;

    cin >> k >> n;
    for (int i = 0; i < n; i++)
    {
        if (k % 10 == 0)
            k /= 10;
        else
            k--;
    }
    cout << k << endl;
    return 0;
}

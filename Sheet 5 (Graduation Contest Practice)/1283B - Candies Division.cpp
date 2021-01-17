//https://codeforces.com/problemset/problem/1283/B

#include <bits/stdc++.h>
#include <fstream>
typedef long long ll;
using namespace std;

int main()
{
    int t, n, k, a, b, temp;

    cin >> t;
    while (t)
    {
        t--;
        cin >> n >> k;
        temp = n / k;
        if (n % k > k / 2)
            cout << (temp * k) + k / 2 << endl;
        else
            cout << n << endl;
    }
    return 0;
}

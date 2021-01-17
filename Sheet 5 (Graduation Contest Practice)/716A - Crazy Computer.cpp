//https://codeforces.com/problemset/problem/716/A

#include <bits/stdc++.h>
#include <fstream>
typedef long long ll;
using namespace std;

int main()
{
    int c, n, a, cont = 0;
    cin >> n >> c;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] <= c)
            cont++;
        else
            cont = 0;
    }
    cout << cont + 1 << endl;
    return 0;
}
//https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>
#include <fstream>
typedef long long ll;
using namespace std;

int main()
{
    int up = 0, dn = 0;
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            up++;
        else
            dn++;
    if (up > dn)
    {
        for (int i = 0; i < n; i++)
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
    }
    else
    {
        for (int i = 0; i < n; i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
    }
    cout << s;

    return 0;
}

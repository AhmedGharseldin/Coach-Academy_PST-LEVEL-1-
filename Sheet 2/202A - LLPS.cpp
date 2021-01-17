//https://codeforces.com/problemset/problem/202/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, arr[26] = {};
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        arr[(int)s[i] - 97]++;
    }
    for (int i = 25; i >= 0; i--)
    {
        if (arr[i] > 0)
        {
            for (int j = 0; j < arr[i]; j++)
            {
                cout << char(i + 'a');
            }
            break;
        }
    }
    return 0;
}

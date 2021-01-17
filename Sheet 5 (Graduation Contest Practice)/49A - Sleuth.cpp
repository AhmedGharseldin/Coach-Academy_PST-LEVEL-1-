//https://codeforces.com/problemset/problem/49/A

#include <bits/stdc++.h>
#include <fstream>
typedef long long ll;
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.size();

    for (int i = n - 2; i >= 0; i--)
        if (isalpha(s[i]))
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            {
                cout << "YES\n";
                break;
            }
            else
            {
                cout << "NO\n";
                break;
            }

    return 0;
}
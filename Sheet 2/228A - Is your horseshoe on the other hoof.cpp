//https://codeforces.com/problemset/problem/228/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b)
    {
        if (b == c)
        {
            if (c == d)
                cout << 3 << endl;
            else
                cout << 2 << endl;
        }
        else if (b == d)
            cout << 2 << endl;
        else if (c == d)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    else if (b == c)
    {
        if (c == d)
            cout << 2 << endl;
        else if (a == d)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    else if (c == d)
    {
        if (c == a)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    else if (a == d)
    {
        if (a == c)
            cout << 2 << endl;
        else if (b == c)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    else if (b == d)
    {
        if (b == c)
            cout << 2 << endl;
        else if (a == c)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    else if (a == c)
    {
        if (a == d)
            cout << 2 << endl;
        else if (b == d)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    else if (b == c)
    {
        if (b == d)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}

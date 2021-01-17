//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=959

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ld, a;
    unsigned int p;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> p;
        unsigned int n = 0, r = 0;
        for (int j = 0; j < 1000; j++)
        {
            n = p;
            while (p > 0)
            {
                ld = p % 10;
                r = (r * 10) + ld;
                p /= 10;
            }
            if (r == n && j != 0)
            {
                cout << j << " " << r << endl;
                break;
            }
            else
            {
                p = r + n;
                r = 0;
            }
        }
    }
    return 0;
}

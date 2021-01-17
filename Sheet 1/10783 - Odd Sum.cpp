//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1724

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, sum;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << "Case " << i + 1 << ": ";
        if (b < a) //swap
        {
            a = b + a;
            b = a - b;
            a = a - b;
        }
        sum = 0;
        for (int x = a; x <= b; x++)
        {
            if (x % 2 == 1)
            {
                sum += x;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

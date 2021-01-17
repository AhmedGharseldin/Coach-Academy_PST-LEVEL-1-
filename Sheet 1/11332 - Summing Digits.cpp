//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2307

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, n, reverseSum = 0;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        else
        {
            while (n != 0)
            {
                int lastD;
                lastD = n % 10;
                n /= 10;
                reverseSum += lastD;
                for (int i = 0; i < 3; i++)
                {
                    lastD = reverseSum % 10;
                    reverseSum /= 10;
                    reverseSum += lastD;
                }
            }
            cout << reverseSum << endl;
            reverseSum = 0;
        }
    }
    return 0;
}

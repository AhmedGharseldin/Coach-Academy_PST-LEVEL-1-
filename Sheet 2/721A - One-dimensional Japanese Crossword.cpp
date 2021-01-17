//https://codeforces.com/problemset/problem/721/A

#include <bits/stdc++.h>

using namespace std;
char N[100];
int main()
{
    int c = 0, sizeOfArray, x = 0, z = 0;
    cin >> sizeOfArray;

    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> N[i];
    }
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (N[i] == 'B' && N[i + 1] != 'B')
            x++;
    }
    cout << x << endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (N[i] == 'B')
        {
            if (N[i] == 'B' && N[i + 1] == 'B')
            {
                z++;
            }
            else
            {
                cout << z + 1;
                cout << " ";
                z = 0;
            }
        }
    }
    return 0;
}
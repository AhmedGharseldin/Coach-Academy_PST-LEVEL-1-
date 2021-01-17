//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1796

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void rotate90(string *before, int length);
int compare(string *big, string *small, int n, int m);

int main()
{
    //    ofstream cout;
    //    cout.open("output.txt");
    int n, m, noRotation, ninetyDegree, oneEightyDegree, twoSeventyDegree;
    while (cin >> n >> m && n && m)
    {
        string *Arr1 = new string[n];
        // getting input from user
        for (int i = 0; i < n; i++)
        {
            cin >> Arr1[i];
        }
        string *Arr2 = new string[m];
        for (int i = 0; i < m; i++)
        {
            cin >> Arr2[i];
        }

        string *container = new string[m];
        //preform a comparison prior to any transformation operations
        noRotation = compare(Arr1, Arr2, n, m);
        cout << noRotation << " ";

        //rotating 90
        rotate90(Arr2, m);
        // compare
        ninetyDegree = compare(Arr1, Arr2, n, m);
        cout << ninetyDegree << " ";

        //rotating 180
        rotate90(Arr2, m);

        // compare
        oneEightyDegree = compare(Arr1, Arr2, n, m);
        cout << oneEightyDegree << " ";

        //rotating 270
        rotate90(Arr2, m);
        // compare
        twoSeventyDegree = compare(Arr1, Arr2, n, m);
        cout << twoSeventyDegree << endl;
    }
    return 0;
}

void rotate90(string *before, int length)
{
    char after[length][length];
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
            after[i][j] = before[length - j - 1][i];
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
            before[i][j] = after[i][j];
    }
}

int compare(string *big, string *small, int n, int m)
{
    int x, counter = 0, num = 0;
    x = (n - m + 1);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            counter = 0;
            for (int a = 0; a < m; a++)
            {
                for (int b = 0; b < m; b++)
                {
                    if (big[i + a][j + b] == small[a][b])
                    {
                        counter++;
                    }
                }
                if (counter == m * m)
                    num++;
            }
        }
    }
    return num;
}
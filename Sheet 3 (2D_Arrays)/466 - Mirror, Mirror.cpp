//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=407

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void rotate90(string *&after, string *&before, int length);
void reflected(string *&after, string *&before, int length);
bool compare(string *x, string *y, int n);

int main()
{
    int n, ca = 0;
    while (cin >> n)
    {
        ca++;
        string *Arr1 = new string[n];
        string *Arr2 = new string[n];
        string *tempArr2 = new string[n];
        string *container = new string[n];
        // getting input from user
        for (int i = 0; i < n; i++)
        {
            cin >> Arr1[i];
            cin >> Arr2[i];
        }
        // creating temp array for Arr2 for the transformation operations
        for (int i = 0; i < n; i++)
        {
            tempArr2[i] = Arr1[i];
        }
        //preform a comparison prior to any transformation operations
        if (compare(Arr1, Arr2, n))
        {
            cout << "Pattern " << ca << " was preserved." << endl;
            continue;
        }
        //rotating 90
        rotate90(container, tempArr2, n);
        // compare
        if (compare(container, Arr2, n))
        {
            cout << "Pattern " << ca << " was rotated 90 degrees." << endl;
            continue;
        }
        //rotating 180
        rotate90(container, tempArr2, n);
        // compare
        if (compare(container, Arr2, n))
        {
            cout << "Pattern " << ca << " was rotated 180 degrees." << endl;
            continue;
        }
        //rotating 270
        rotate90(container, tempArr2, n);
        // compare
        if (compare(container, Arr2, n))
        {
            cout << "Pattern " << ca << " was rotated 270 degrees." << endl;
            continue;
        }
        //rotating 360 to return the array to original state prior to reflection.
        rotate90(container, tempArr2, n);

        //reflecting vertically
        reflected(container, tempArr2, n);
        //compare
        if (compare(container, Arr2, n))
        {
            cout << "Pattern " << ca << " was reflected vertically." << endl;
            continue;
        }

        //rotating 90 (after reflection)
        rotate90(container, tempArr2, n);
        // compare
        if (compare(container, Arr2, n))
        {
            cout << "Pattern " << ca << " was reflected vertically and rotated 90 degrees." << endl;
            continue;
        }
        //rotating 180 (after reflection)
        rotate90(container, tempArr2, n);
        // compare
        if (compare(container, Arr2, n))
        {
            cout << "Pattern " << ca << " was reflected vertically and rotated 180 degrees." << endl;
            continue;
        }
        //rotating 270 (after reflection)
        rotate90(container, tempArr2, n);
        // compare
        if (compare(container, Arr2, n))
        {
            cout << "Pattern " << ca << " was reflected vertically and rotated 270 degrees." << endl;
            continue;
        }
        else
            cout << "Pattern " << ca << " was improperly transformed." << endl;
    }
    return 0;
}

void rotate90(string *&after, string *&before, int length)
{
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
void reflected(string *&after, string *&before, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
            after[i][j] = before[length - i - 1][j];
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
            before[i][j] = after[i][j];
    }
}
bool compare(string *x, string *y, int n)
{
    bool status = false;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (x[i][j] == y[i][j])
            {
                counter++;
            }

        if (counter == n * n)
            status = true;
    }
    return status;
}
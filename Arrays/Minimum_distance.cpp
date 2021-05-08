#include <bits/stdc++.h>
using namespace std;

int minDist(int a[], int n, int x, int y)
{
    int i;
    int min_dist = INT_MAX;
    int prev;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x || a[i] == y)
        {
            prev = i;
            break;
        }
    }
    for (i = 1; i < n; i++)
    {
        if (a[i] == x || a[i] == y)
        {

            if (a[prev] != a[i] && (i - prev) < min_dist)
            {

                min_dist = i - prev;
                prev = i;
            }
            else
            {
                prev = i;
            }
        }
    }
    if (min_dist == INT_MAX)
    {
        return -1;
    }

    return min_dist;
}

int main()
{
    int a[] = {1, 2, 3, 2};
    int x = 1;
    int y = 2;
    cout << minDist(a, 4, x, y);
}
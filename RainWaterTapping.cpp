#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {3, 0, 0, 2, 0, 4};
    int size = 6;

    int NGL[size];
    int NGR[size];
    NGL[0] = arr[0];

    for (int i = 1; i < size; i++)
    {
        NGL[i] = max(NGL[i - 1], arr[i]);
    }
    NGR[size - 1] = arr[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        NGR[i] = max(NGR[i + 1], arr[i]);
    }

    int water[size];

    for (int i = 0; i < size; i++)
    {
        water[i] = min(NGL[i], NGR[i]) - arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + water[i];
    }
    cout << sum << endl;

    return 0;
}
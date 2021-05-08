#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int *findTwoElement(int *arr, int n)
    {
        int i = 0;
        while (i < n)
        {
            if (arr[i] != arr[arr[i] - 1])
                swap(arr[i], arr[arr[i] - 1]);
            else
                i++;
        }
        int *output = new int[2];
        for (int j = 0; j < n; j++)
        {
            if (arr[j] != j + 1)
            {
                output[0] = arr[j];
                output[1] = j + 1;
            }
        }
        return output;
    }
};

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solution ob;
    int *ans = ob.findTwoElement(arr, n);
    cout << ans[0]<<" "<<ans[1];
}

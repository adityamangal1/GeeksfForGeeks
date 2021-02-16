#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int nthTermOfAP(int A1, int A2, int N)
    {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        for (int i = A1; i <= N; i++)
        {
            if (i == N)
            {

                return arr[i];
            }
        }
    }
};

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int A1, A2, N;
    //     cin >> A1 >> A2 >> N;
    //     Solution ob;
    //     cout << ob.nthTermOfAP(A1, A2, N) << "\n";
    // }

    Solution adi;
    cout << adi.nthTermOfAP(1, 2, 10);

    return 0;
}
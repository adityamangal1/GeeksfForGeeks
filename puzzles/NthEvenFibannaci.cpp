#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    const long long mod = 1e9 + 7;
    long long int nthEven(long long int n)
    {
        n *= 3;
        int arr[n + 5];
        arr[0] = 0;
        arr[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            // Formula of fibonacci series = f(n-1)+f(n-2)
            arr[i] = (arr[i - 1] + arr[i - 2]) % mod;
        }
        return arr[n];
    }
};
int main()
{

    solution ob;
    int n;
    cout << "Enter the term:";
    cin >> n;
    int ans = ob.nthEven(n);
    cout << "The even number term in fibanocci series on " << n << " position is " << ans<<".";
}
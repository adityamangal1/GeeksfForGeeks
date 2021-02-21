#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    long long int prime_factor(int n)
    {
        long long MaxPrime = -1;

        // When it even
        while (n % 2 == 0)
        {
            MaxPrime = 2;
            n /= 2;
        }

        // when becomes Odd
        for (int i = 3; i < sqrt(n); i += 2)
        {
            while (n % i == 0)
            {
                MaxPrime = i;
                n /= i;
            }
        }
        if (n > 2)
            MaxPrime = n;
        return MaxPrime;
    }
};

int main()
{

    solution ob;
    int N = 24;
    cout << "Maximum Prime factor of " << N << " is " << ob.prime_factor(N);

    return 0;
}
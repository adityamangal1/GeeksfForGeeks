// Given non - zero two integers N and M.The problem is to find the number closest to N and divisible by M.If there are more than one such number, then output the one having maximum absolute value.
// Input : N = 13,
// M = 4 Output : 12
// Explanation : 12 is the Closest Number to 13 which is divisible by 4.

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int closest_Num(int n, int m)
    {

        int q = n / m;
        // First closest num possiblity
        int n1 = q * m;

        // secound closest num possiblity
        int n2 = (m * n) > 0 ? (m * (q + 1)) : (m * (q - 1));

        // if true
        if (abs(n - n1) < abs(n - n2))
            return n1;

        return n2;
    }
};

int main()
{
    int n = 13, m = 4;
    solution ob;
    cout << ob.closest_Num(n, m);

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int pairCubeCount(int n)
    {

        // a^3+b^3=n
        int count = 0;
        for (int i = 1; i <= cbrt(n); i++)
        {
            // Storing cube root of a number
            int cb = i * i * i;

            // Differnce as per condition
            int diff = n - cb;

            // Cuberoot of diifference as pe condition
            int cbrtdiff = cbrt(diff);
            if (cbrtdiff * cbrtdiff * cbrtdiff == diff)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution ob;
    int n;
    cout << ob.pairCubeCount(9) << " Pairs are there for the given number";

    return 0;
}
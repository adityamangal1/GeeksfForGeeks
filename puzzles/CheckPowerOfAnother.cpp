// '''Input: X = 2, Y = 8 Output : 1 Explanation : 23 is equal to 8.'''

#include <bits/stdc++.h>
using namespace std;

int isPowerOfAnother(long long x, long long y)
{
    int res1 = log(y) / log(x);
    double res2 = log(y) / log(x);
    return (res1 == res2);
}

int main()
{
    long long x = 2, y = 8;
    cout<<isPowerOfAnother(x, y);
}

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int isDigitSumPalindrome(int N)

    {
        int sum;
        while (N > 0)
        {
            int last_num = N % 10;
            sum = sum + last_num;
            N = N / 10;
        }
        int check_num = sum;
        int copy_n = check_num;
        int reverse = 0;
        while (check_num > 0)
        {
            int rem = check_num % 10;
            reverse = reverse * 10 + rem;
            check_num = check_num / 10;
        }
        if (copy_n == reverse)
        {

            return 1;
        }
        else
        {

            return 0;
        }
    }
};
int main()
{
    Solution ob;
    int n = 98;

    cout << ob.isDigitSumPalindrome(n);

    return 0;
}
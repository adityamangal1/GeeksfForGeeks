#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> v; // Vector to store all Jumping numbers less than or equal to X.

    // Prints all jumping numbers smaller than or equal to x starting
    // with 'num'. It mainly does BFS starting from 'num'.
    void bfs(long long x, long long num)
    {
        // Create a queue and enqueue 'i' to it
        queue<long long> q;
        q.push(num);

        // Do BFS starting from i
        while (!q.empty())
        {
            num = q.front();
            q.pop();

            if (num <= x)
            {
                v.push_back(num);
                int last_dig = num % 10;

                // If last digit is 0, append next digit only
                if (last_dig == 0)
                    q.push((num * 10) + (last_dig + 1));

                // If last digit is 9, append previous digit only
                else if (last_dig == 9)
                    q.push((num * 10) + (last_dig - 1));

                // If last digit is neighter 0 nor 9, append both
                // previous and next digits
                else
                {
                    q.push((num * 10) + (last_dig - 1));
                    q.push((num * 10) + (last_dig + 1));
                }
            }
        }
    }

    long long jumpingNums(long long X)
    {

        for (long long i = 1; i <= 9 && i <= X; i++)
            bfs(X, i);

        sort(v.begin(), v.end()); // Sort the vector of jumping numbers

        return v[v.size() - 1]; // Return the last element
    }
};
int main()
{
    int x = 40;
    Solution ob;
    cout<<ob.jumpingNums(x);
    return 0;
}

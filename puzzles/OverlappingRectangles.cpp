#include <bits/stdc++.h>
using namespace std;

class FindingOverlapping
{
public:
    int overlap(int l1[], int r1[], int l2[], int r2[])
    {
        if (l1[0] >= r2[0] || l2[0] >= r1[0])
        {
            return 0;
        }
        if (l1[1] <= r2[1] || l2[1] <= r1[1])
        {
            return 0;
        }
    }
};

int main()
{
}
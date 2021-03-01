#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    bool is_Prime(int num)
    {

        // Corner case
        if (num <= 1)
            return false;
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    vector<int> Prime_Pair(int Check_num)
    {

        vector<int> arr;
        for (int i = 2; i <= Check_num; i++)
        {
            if (is_Prime(i))
            {
                for (int j = 2; j <= Check_num / i; j++)
                {
                    if (is_Prime(j))
                    {
                        arr.push_back(i);
                        arr.push_back(j);
                    }
                }
            }
        }
        return arr;
    }
};

int main()
{
    solution ob;
    vector<int> ans = ob.Prime_Pair(8);
    // auto keyword used in for to iterate element in vector type array
    for (auto i : ans)
    {
        cout << i;
        cout << " ";
    }
}
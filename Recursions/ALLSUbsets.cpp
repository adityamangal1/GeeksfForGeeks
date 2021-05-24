#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
void SuperSubsets(vector<int> ip, vector<int> op)
{
    if (ip.size() == 0)
    {
        ans.push_back(op);
        return;
    }
    vector<int> op1 = op,op2 = op;
    op1.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    SuperSubsets(ip, op1);
    SuperSubsets(ip, op2);
}

vector<vector<int>> subsets(vector<int> &input)
{
    vector<int> op;
    SuperSubsets(input, op);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{

    cout << "Enter the size of string:";
    vector<int> result;
    int temp,n;
    cin >> n;
    cout << "Enter your string:";
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        result.push_back(temp);
        
    }

    vector<vector<int>> result2 = subsets(result);
    for (int i = 0; i < result2.size(); i++)
    {
        /* code */
        for (int j = 0; j < result2[i].size(); j++)
        {
            cout << result2[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
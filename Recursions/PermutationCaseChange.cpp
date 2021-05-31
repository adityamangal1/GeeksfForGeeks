#include <bits/stdc++.h>
using namespace std;

void CaseChange(string ip, string op, vector<string> &v)
{
    if (ip.size() == 0)
    {
        v.push_back(op);
        return;
    }
    if (isalpha(ip[0]))
    {
        string op1 = op, op2 = op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin() + 0);
        CaseChange(ip, op1, v);
        CaseChange(ip, op2, v);
    }
    else{
        string op1 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);

        CaseChange(ip, op1, v);
    }
}

vector<string> Permutation(string s)
{
    string op = "";
    string ip = s;
    vector<string> v;
    CaseChange(ip, op, v);
    return v;
}

int main()
{

    cout << "Enter the size of string:";
    // vector<int> result;
    int n;
    cin >> n;
    cout << "Enter your string:";
    string s;
    cin >> s;

    vector<string> result2 = Permutation(s);
    for (int i = 0; i < result2.size(); i++)
    {
        cout << result2[i];
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void WithSpaces(string ip, string op, vector<string> &v)
{
    if (ip.size() == 0)
    {
        v.push_back(op);
        return;
    }

    string op1 = op, op2 = op;
    op1.push_back(' ');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    WithSpaces(ip, op1, v);
    WithSpaces(ip, op2, v);
    return;
}

vector<string> Permutation(string s)
{
    string op = "";
    vector<string> v;
    op.push_back(s[0]);
    s.erase(s.begin() + 0);
    WithSpaces(s, op, v);

    return v;
}

int main()
{

    cout << "Enter the size of string:";
    int n;
    cin >> n;
    string s;
    cout << "Enter your string:";
    cin >> s;

    cout << "Resultant String with Spaces:" << endl;
    vector<string> result2 = Permutation(s);
    for (int i = 0; i < result2.size(); i++)
    {

        cout << result2[i];
        cout << endl;
    }

    return 0;
}
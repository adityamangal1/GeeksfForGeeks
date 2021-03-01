#include <bits/stdc++.h>
using namespace std;

bool Prime_num_array[1000001];

vector<int> Only_Prime_num;
void SieveOfErastothenes(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (Prime_num_array[i])
            for (int j = i * i; i <= n; j = i + j)
            {
                Prime_num_array[i] = false;
            }
    }

    for (int i = 2; i <= n; i++)
    {
        if (Prime_num_array[i])
            Only_Prime_num.push_back(i);
    }
}

int main()
{
    // Assigning values in array by using memset
    memset(Prime_num_array, true, sizeof(Prime_num_array));

    // Creating an array in which only prime numbers are there
    SieveOfErastothenes(1);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int counter = 0;
        int index = 0;

        int currentNum = Only_Prime_num[index] * Only_Prime_num[index];
        while (currentNum <= n)
        {

            index++;
            // Increasing counter
            counter++;

            // If index reaches to last element in the array
            if (index == Only_Prime_num.size())
                break;

            currentNum = (long long)Only_Prime_num[index] * (long long)Only_Prime_num[index];
        }
        cout << counter << endl;
    }

    return 0;
}
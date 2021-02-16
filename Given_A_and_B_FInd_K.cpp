// #include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 12, b = 11, c = 4;


    int num = pow(a, b);
    int count = 0;
    while (num > 0 && count < c)
    {
        // To take last digit of that num
        int rem = num % 10;

        // Increasing count
        count++;

        if (count == c)
        {
            cout<< rem;
        }

        // Removing that digit if condition not satisfied
        num = num / 10;
    }

    return 0;
}
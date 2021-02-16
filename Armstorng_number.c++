// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n, r, sum = 0, temp;
    printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
        printf("It's an armstrong  number ");
    else
        printf("Not an armstrong number");
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {2, 3, 213, 21, 3};
    int n = 5;
    cout << *max_element(arr,arr+n);
    return 0;


}
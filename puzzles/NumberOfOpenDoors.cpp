#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int OpenDoors(int n){
        return sqrt(n);
    }
};
int main(){

    int n;
    cout << "Enter your input:"<<endl;
    cin >> n;
    solution ob;
    cout<<"Number of doors open is "<<ob.OpenDoors(n)<<".";
}
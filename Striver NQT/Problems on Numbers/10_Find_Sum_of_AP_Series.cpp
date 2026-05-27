#include<bits/stdc++.h>
using namespace std;

void apSum(int n, int a, int d)
{
    cout << (n * (2*a + (n-1)*d)) / 2;
}

int main(){
    string s;
    getline(cin,s);
    vector<int> arr;
    stringstream ss(s);
    string temp;
    while(getline(ss,temp,' ')){
        arr.push_back(stoi(temp));
    }
    apSum(arr[0], arr[1], arr[2]);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void gpSum(double a, double r, int n)
{
    cout << a * (1 - pow(r,n)) / (1 - r);
}

int main(){
    string s;
    getline(cin,s);
    vector<double> arr;
    stringstream ss(s);
    string temp;
    while(getline(ss,temp,' ')){
        arr.push_back(stod(temp));
    }
    gpSum(arr[0], arr[1], arr[2]);
    return 0;
}
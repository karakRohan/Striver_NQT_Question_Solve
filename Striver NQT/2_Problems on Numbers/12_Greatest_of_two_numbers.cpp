#include<bits/stdc++.h>
using namespace std;

void greatest(double a, double b)
{
    cout << max(a,b);
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
    greatest(arr[0], arr[1]);
    return 0;
}
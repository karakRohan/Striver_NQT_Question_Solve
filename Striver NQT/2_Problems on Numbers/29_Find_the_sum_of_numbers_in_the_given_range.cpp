#include<bits/stdc++.h>
using namespace std;

void rangeSum(int l, int r)
{
    cout << (r*(r+1)/2) - ((l-1)*l/2);
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
    rangeSum(arr[0], arr[1]);
    return 0;
}
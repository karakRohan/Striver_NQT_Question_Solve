#include<bits/stdc++.h>
using namespace std;

long long power(int x, int n)
{
    cout << (long long)pow(x,n);
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
    power(arr[0], arr[1]);
    return 0;
}
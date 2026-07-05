#include<bits/stdc++.h>
using namespace std;

void factorial(int n)
{
    long long fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact;
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
    factorial(arr[0]);
    return 0;
}
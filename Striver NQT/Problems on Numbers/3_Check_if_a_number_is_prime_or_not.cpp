#include<bits/stdc++.h>
using namespace std;

void primeNumber(int n)
{
    int c = 0;

    for(int i = 1; i <= n; i++)
    {
        c += (n % i == 0);
    }

    cout << (c == 2 ? "True" : "False");
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

    primeNumber(arr[0]);

    return 0;
}
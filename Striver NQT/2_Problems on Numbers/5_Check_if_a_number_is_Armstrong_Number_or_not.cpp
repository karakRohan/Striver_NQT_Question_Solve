#include<bits/stdc++.h>
using namespace std;

void armstrong(int n)
{
    int sum = 0, temp = n;
    int digits = to_string(n).size();
    while(temp)
    {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    cout << (sum == n ? "True" : "False");
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
    armstrong(arr[0]);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void strongNumber(int n)
{
    int sum = 0, temp = n;
    while(temp)
    {
        int fact = 1;
        for(int i = 1; i <= temp%10; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }
    cout << (sum == n ? "Yes" : "No");
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
    strongNumber(arr[0]);
    return 0;
}
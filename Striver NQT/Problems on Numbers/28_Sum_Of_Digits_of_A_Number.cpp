#include<bits/stdc++.h>
using namespace std;

void sumDigits(int n)
{
    while(n > 9)
    {
        int sum = 0;
        while(n)
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    cout << n;
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
    sumDigits(arr[0]);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void harshadNumber(int n)
{
    int sum = 0, temp = n;
    while(temp)
    {
        sum += temp % 10;
        temp /= 10;
    }
    cout << (n % sum == 0 ? "Yes" : "No");
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
    harshadNumber(arr[0]);
    return 0;
}
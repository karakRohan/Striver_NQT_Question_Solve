#include<bits/stdc++.h>
using namespace std;

void abundantNumber(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)sum += i;
    }
    cout << (sum > n ? "Abundant Number"
                     : "Not Abundant Number");
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
    abundantNumber(arr[0]);
    return 0;
}
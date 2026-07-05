#include<bits/stdc++.h>
using namespace std;

void reverseNumber(int n)
{
    string s = to_string(n);
    reverse(s.begin(), s.end());
    cout << s;
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
    reverseNumber(arr[0]);
    return 0;
}
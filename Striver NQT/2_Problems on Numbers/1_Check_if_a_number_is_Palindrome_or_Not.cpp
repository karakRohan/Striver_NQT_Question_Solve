#include<bits/stdc++.h>
using namespace std;

void palindrome(int n)
{
    string s = to_string(n);

    string rev = s;

    reverse(rev.begin(), rev.end());

    cout << (s == rev ? "Palindrome Number"
                      : "Not Palindrome");
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

    for(int ans : arr){
        palindrome(ans);
    }

    return 0;
}
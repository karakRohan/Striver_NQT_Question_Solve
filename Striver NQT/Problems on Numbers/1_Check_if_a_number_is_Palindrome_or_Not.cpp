#include<bits/stdc++.h>
using namespace std;

void palindrome(string s)
{
    string temp = s;

    reverse(temp.begin(), temp.end());

    cout << (s == temp ? "Palindrome Number"
                       : "Not Palindrome");
}

int main(){

    string s;
    getline(cin,s);

    palindrome(s);

    return 0;
}
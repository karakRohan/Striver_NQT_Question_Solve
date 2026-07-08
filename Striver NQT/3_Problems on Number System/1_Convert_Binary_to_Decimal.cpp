#include<bits/stdc++.h>
using namespace std;

void binaryToDecimal(string s)
{
    cout << stoi(s, 0, 2);
}

int main(){
    string s;
    getline(cin,s);
    vector<string> arr;
    stringstream ss(s);
    string temp;
    while(getline(ss,temp,' ')){
        arr.push_back(temp);
    }
    binaryToDecimal(arr[0]);
    return 0;
}
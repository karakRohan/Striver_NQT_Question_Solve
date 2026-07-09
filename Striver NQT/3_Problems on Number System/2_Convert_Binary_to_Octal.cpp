#include<bits/stdc++.h>
using namespace std;

void binaryToOctal(string s)
{
    int n = stoi(s,0,2);
    cout << oct << n;
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
    binaryToOctal(arr[0]);
    return 0;
}
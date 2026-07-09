#include<bits/stdc++.h>
using namespace std;

void octalToBinary(string s)
{
    for(char c:s)
    {
        cout<<bitset<3>(c-'0');
    }
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
    octalToBinary(arr[0]);
    return 0;
}
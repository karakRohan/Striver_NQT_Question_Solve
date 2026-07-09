#include<bits/stdc++.h>
using namespace std;

void decimalToBinary(int n)
{
    string s = bitset<32>(n).to_string();
    cout << s.substr(s.find('1'));
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
    decimalToBinary(arr[0]);
    return 0;
}
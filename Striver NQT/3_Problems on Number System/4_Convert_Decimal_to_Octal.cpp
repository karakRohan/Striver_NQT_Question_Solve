#include<bits/stdc++.h>
using namespace std;
void decimalToOctal(int n)
{
    cout << oct << n;
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
    decimalToOctal(arr[0]);
    return 0;
}
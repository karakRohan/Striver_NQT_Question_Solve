#include<bits/stdc++.h>
using namespace std;
void checkNumber(int n){ cout << (n > 0 ? "Positive" : "Negative"); }
int main(){

    string s;
    getline(cin,s);
    vector<int> arr;
    stringstream ss(s);
    string temp;
    while(getline(ss,temp,' ')){
        arr.push_back(stoi(temp));
    }
    checkNumber(arr[0]);
    return 0;
}
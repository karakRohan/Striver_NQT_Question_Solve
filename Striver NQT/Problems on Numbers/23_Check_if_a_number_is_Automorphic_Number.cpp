#include<bits/stdc++.h>
using namespace std;

void automorphic(int n)
{
    string a = to_string(n);
    string b = to_string(n*n);
    cout << (b.substr(b.size()-a.size()) == a ?
            "Automorphic Number" :
            "Not Automorphic Number");
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
    automorphic(arr[0]);
    return 0;
}
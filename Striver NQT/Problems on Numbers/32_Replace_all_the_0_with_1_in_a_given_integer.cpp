#include<bits/stdc++.h>
using namespace std;

void replaceZero(int n)
{
    string s = to_string(n);
    replace(s.begin(), s.end(), '0', '1');
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
    replaceZero(arr[0]);
    return 0;
}

// input: 102030
// output: 112131
#include<bits/stdc++.h>
using namespace std;

void sumNatural(int n){ 
    cout << n*(n+1)/2; 
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
    sumNatural(arr[0]);
    return 0;
}
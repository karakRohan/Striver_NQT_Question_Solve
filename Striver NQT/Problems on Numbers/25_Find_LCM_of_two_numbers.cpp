#include<bits/stdc++.h>
using namespace std;

void lcmNumber(int a, int b)
{
    cout << (a*b)/__gcd(a,b);
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
    lcmNumber(arr[0], arr[1]);
    return 0;
}
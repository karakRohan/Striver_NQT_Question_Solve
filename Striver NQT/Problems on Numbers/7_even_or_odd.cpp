#include<bits/stdc++.h>
using namespace std;

void evenOdd(int n)
{
    cout << (n % 2 == 0 ? "even" : "odd");
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
    evenOdd(arr[0]);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void leapYear(int y)
{
    cout << ((y%400==0 || (y%4==0 && y%100!=0)) ? "Yes" : "No");
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
    leapYear(arr[0]);
    return 0;
}
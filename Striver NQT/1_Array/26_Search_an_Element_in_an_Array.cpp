#include<bits/stdc++.h>
using namespace std;

void searchElement(vector<int>& arr, int k)
{
    cout << find(arr.begin(), arr.end(), k) - arr.begin();
}

int main(){

    string s;
    getline(cin,s);

    if(s.front()=='{' && s.back()=='}'){
        s = s.substr(1,s.length()-2);
    }

    stringstream ss(s);
    string temp;
    vector<int> arr;

    while(getline(ss,temp,',')){
        arr.push_back(stoi(temp));
    }

    int k;
    cin >> k;

    searchElement(arr,k);

    return 0;
}
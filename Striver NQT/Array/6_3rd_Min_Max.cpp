#include<bits/stdc++.h>
using namespace std;

void tmaxmin(vector<int>& arr)
{
    sort(arr.begin(), arr.end());

    cout << arr[arr.size()-3] << " " << arr[2];
}

int main(){

    string s;
    getline(cin,s);

    if(s.front()=='[' && s.back()==']'){
        s = s.substr(1,s.length()-2);
    }
    
    stringstream ss(s);
    string temp;
    vector<int> arr;

    while(getline(ss,temp,',')){
        arr.push_back(stoi(temp));
    }

    tmaxmin(arr);

    return 0;
}
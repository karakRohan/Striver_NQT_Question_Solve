#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr)
{
    reverse(arr.begin(), arr.end());

    for(int x : arr)
    {
        cout << x << " ";
    }
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

    reverseArray(arr);

    return 0;
}
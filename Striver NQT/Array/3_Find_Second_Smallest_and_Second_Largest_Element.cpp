#include<bits/stdc++.h>
using namespace std;

void secondElement(vector<int>& arr)
{
    sort(arr.begin(), arr.end());

    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    if(arr.size() < 2)
    {
        cout << "Second Smallest : -1" << endl;
        cout << "Second Largest : -1";
        return;
    }

    cout << "Second Smallest : " << arr[1] << endl;

    cout << "Second Largest : " << arr[arr.size()-2];
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

    secondElement(arr);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void smallestElement(vector<int>& arr)
{
    cout << *min_element(arr.begin(), arr.end());
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

    smallestElement(arr);

    return 0;
}
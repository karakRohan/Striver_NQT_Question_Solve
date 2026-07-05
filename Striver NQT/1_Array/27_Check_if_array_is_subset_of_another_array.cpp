#include<bits/stdc++.h>
using namespace std;

void checkSubset(vector<int>& arr1, vector<int>& arr2)
{
    bool flag = true;

    for(int x : arr1)
    {
        if(find(arr2.begin(), arr2.end(), x) == arr2.end())
        {
            flag = false;
        }
    }

    cout << (flag ? "Subset" : "Not Subset");
}

int main(){

    string s1,s2;

    getline(cin,s1);
    getline(cin,s2);

    if(s1.front()=='[' && s1.back()==']'){
        s1 = s1.substr(1,s1.length()-2);
    }

    if(s2.front()=='[' && s2.back()==']'){
        s2 = s2.substr(1,s2.length()-2);
    }

    stringstream ss1(s1), ss2(s2);

    string temp;

    vector<int> arr1, arr2;

    while(getline(ss1,temp,',')){
        arr1.push_back(stoi(temp));
    }

    while(getline(ss2,temp,',')){
        arr2.push_back(stoi(temp));
    }

    checkSubset(arr1,arr2);

    return 0;
}
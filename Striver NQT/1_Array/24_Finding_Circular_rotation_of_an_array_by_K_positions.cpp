#include<bits/stdc++.h>
using namespace std;

void circularRotate(vector<int>& arr, int k)
{
    rotate(arr.begin(), arr.end()-k, arr.end());

    cout << "[";

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];

        if(i != arr.size()-1)
        {
            cout << ", ";
        }
    }

    cout << "]";
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

    int k;
    cin >> k;

    circularRotate(arr,k);

    return 0;
}
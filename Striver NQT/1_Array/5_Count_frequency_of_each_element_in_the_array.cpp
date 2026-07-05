#include<bits/stdc++.h>
using namespace std;

void frequency(vector<int>& arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(count(arr.begin(), arr.begin()+i, arr[i]) == 0)
        {
            cout << arr[i] << " "
                 << count(arr.begin(), arr.end(), arr[i]) << endl;
        }
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

    frequency(arr);

    return 0;
}
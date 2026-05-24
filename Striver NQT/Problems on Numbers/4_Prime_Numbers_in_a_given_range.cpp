#include<bits/stdc++.h>
using namespace std;

void primeRange(int a, int b)
{
    vector<int> ans;
    for(int i = a; i <= b; i++)
    {
        int c = 0;
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                c++;
            }
        }
        if(c == 2)
        {
            ans.push_back(i);
        }
    }
    cout << "[";
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if(i != ans.size()-1)
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
    primeRange(arr[0], arr[1]);
    return 0;
}
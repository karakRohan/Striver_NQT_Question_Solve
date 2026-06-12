#include<bits/stdc++.h>
using namespace std;
void firstOccurrence(vector<int>& arr, int target)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==target)
        {
            cout<<i;
            return;
        }
    }
    cout<<-1;
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
    int target;
    cin >> target;
    firstOccurrence(arr,target);
    return 0;
}



/*
Input:
[1,2,3,4,5]
3
Output:
2
*/
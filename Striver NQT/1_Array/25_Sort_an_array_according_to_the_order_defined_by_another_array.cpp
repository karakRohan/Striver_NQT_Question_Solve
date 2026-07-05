#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, vector<int>& order)
{
    for(int x : order)
    {
        for(int y : arr)
        {
            if(x == y)
            {
                cout << y << " ";
            }
        }
    }
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

    vector<int> arr, order;

    while(getline(ss1,temp,',')){
        arr.push_back(stoi(temp));
    }

    while(getline(ss2,temp,',')){
        order.push_back(stoi(temp));
    }

    sortArray(arr,order);

    return 0;
}
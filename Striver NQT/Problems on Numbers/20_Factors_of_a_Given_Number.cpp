#include<bits/stdc++.h>
using namespace std;

void factors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) cout<<i<<" ";
    }
}


int main(){
    string s;
    getline(cin,s);
    vector<int> arr;
    stringstream ss(s);
    string temp;
    while(getline(ss,temp,' ')){
        arr.push_back(stoi(temp));
    }
    factors(arr[0]);
    return 0;
}
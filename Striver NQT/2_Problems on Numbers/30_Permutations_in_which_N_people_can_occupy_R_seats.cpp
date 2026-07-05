#include<bits/stdc++.h>
using namespace std;

void permutation(int n,int r)
{
    long long ans=1;
    for(int i=n;i>n-r;i--) ans*=i;
    cout<<ans;
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
    permutation(arr[0], arr[1]);
    return 0;
}
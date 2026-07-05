#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n)
{
    int a=0,b=1,c;
    for(int i=0;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
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
    fibonacci(arr[0]);
    return 0;
}
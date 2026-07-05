#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n < 2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

void sumOfPrimes(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(prime(i) && prime(n-i))
        {
            cout<<"True";
            return;
        }
    }
    cout<<"False";
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
    sumOfPrimes(arr[0]);
    return 0;
}
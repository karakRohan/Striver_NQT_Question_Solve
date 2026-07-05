#include<bits/stdc++.h>
using namespace std;
void primeFactors(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            int c=0;
            for(int j=1;j<=i;j++) c += (i%j==0);
            if(c==2)cout<<i<<" ";
        }
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
    primeFactors(arr[0]);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void addFraction(int n1,int d1,int n2,int d2)
{
    int n=n1*d2+n2*d1,
        d=d1*d2,
        g=__gcd(n,d);
    cout<<n/g<<" "<<d/g;
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
    addFraction(arr[0],arr[1],arr[2],arr[3]);
    return 0;
}
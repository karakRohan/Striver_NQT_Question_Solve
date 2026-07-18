#include<bits/stdc++.h>
using namespace std;

string a[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string b[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

void words(int n){
    if(n>=1000) cout<<a[n/1000]<<" thousand ", n%=1000;
    if(n>=100) cout<<a[n/100]<<" hundred ", n%=100;
    if(n>=20) cout<<b[n/10]<<" ", n%=10;
    if(n) cout<<a[n];
}

int main(){

    string s;
    getline(cin,s);
    vector<int> arr;
    stringstream ss(s);
    string temp;
    while(getline(ss,temp,' '))
        arr.push_back(stoi(temp));

    words(arr[0]);
    return 0;
}
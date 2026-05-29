#include<bits/stdc++.h>
using namespace std;

void maxMinDigit(int n)
{
    string s = to_string(n);

    cout << *max_element(s.begin(),s.end())-'0'
         << " "
        << *min_element(s.begin(),s.end())-'0';
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
    maxMinDigit(arr[0]);
    return 0;
}
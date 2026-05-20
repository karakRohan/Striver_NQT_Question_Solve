#include<bits/stdc++.h>
using namespace std;

void palindromeRange(int min, int max)
{
    for(int i = min; i <= max; i++)
    {
        string s = to_string(i);

        string rev = s;

        reverse(rev.begin(), rev.end());

        if(s == rev)
        {
            cout << i << " ";
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

    palindromeRange(arr[0], arr[1]);

    return 0;
}
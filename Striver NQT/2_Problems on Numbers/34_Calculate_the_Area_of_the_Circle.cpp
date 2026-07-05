#include<bits/stdc++.h>
using namespace std;

void areaCircle(double r)
{
    cout << fixed << setprecision(1) << 3.14*r*r;
}

int main(){
    string s;
    getline(cin,s);
    vector<double> arr;
    stringstream ss(s);
    string temp;
    while(getline(ss,temp,' ')){
        arr.push_back(stod(temp));
    }
    areaCircle(arr[0]);
    return 0;
}
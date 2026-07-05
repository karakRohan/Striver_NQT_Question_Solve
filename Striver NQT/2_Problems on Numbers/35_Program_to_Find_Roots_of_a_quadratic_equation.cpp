#include<bits/stdc++.h>
using namespace std;

void roots(double a,double b,double c)
{
    double d=b*b-4*a*c;
    if(d>0)
        cout<<"Roots are real and different: "
            <<(-b+sqrt(d))/(2*a)<<" "
            <<(-b-sqrt(d))/(2*a);
    else if(d==0) cout<<"Roots are real and same: " <<-b/(2*a);
    else cout<<"Roots are complex";
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
    roots(arr[0],arr[1],arr[2]);
    return 0;
}
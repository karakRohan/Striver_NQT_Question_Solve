#include<bits/stdc++.h>
using namespace std;

void movezero(vector<int>& arr)
{
    int j = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int x : arr)
        cout << x << " ";
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    movezero(arr);

    return 0;
}
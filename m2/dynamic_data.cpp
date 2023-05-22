#include <bits/stdc++.h>
using namespace std;
int main()
{
    int * a = new int;
    *a = 10;
    cout<<*a<<endl;
    float * f = new float;
    *f = 3.54;
    cout<< *f<<endl;
    int *arr = new int[3];
    for(int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
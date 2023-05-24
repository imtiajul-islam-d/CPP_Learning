#include <bits/stdc++.h>
using namespace std;
int * fun()
{
    int * arr = new int[5];
    // int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    return arr;
    
}
int main()
{
    int * arr = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    // if have more code at the following then delete the above array
    delete[] arr;
    // code
    return 0;
}
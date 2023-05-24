#include <bits/stdc++.h>
using namespace std;
int main()
{
    int * a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int * ai = new int[7];
    for (int i = 0; i < 7; i++)
    {
        ai[i] = a[i];
    }
    ai[5] = 60;
    ai[6] = 70;
    for (int i = 0; i < 7; i++)
    {
        cout << ai[i] << " ";
    }
    cout << endl;
    delete[] a;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string e;
    getline(cin, e);
    // stringstream ss(e);
    stringstream ss;
    ss << e;
    string word;
    while(ss >> word)
    {
        cout << word << endl;
    }
    return 0;
}
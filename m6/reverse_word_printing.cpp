#include <bits/stdc++.h>
using namespace std;
void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        print(ss);
        cout << word << endl;
    }
}
int main()
{
    string emi;
    getline(cin, emi);
    stringstream ss(emi);
    // string word;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }
    print(ss);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string emi = "emi";
    string eshat = "eshat";
    // emi = emi + " " + eshat;
    emi.append(" " + eshat);
    emi.push_back('A');
    emi.pop_back();
    emi.pop_back();
    emi.assign("Emi 3");
    // emi.erase(1); // E
    // emi.erase(1, 3); // E3
    // emi.replace(1, 1, "E"); // EEi 3
    emi.insert(1, "emi"); // Eemimi 3


    cout << emi << endl;
    cout << eshat << endl;
    return 0;
}
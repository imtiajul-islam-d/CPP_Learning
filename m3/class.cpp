#include <bits/stdc++.h>
using namespace std;
class Student
{
    // Access Modifier
public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student emtiaz;
    emtiaz.cls = 12;
    emtiaz.roll = 01;
    char n[100] = {"Emtiazul Islam"};
    emtiaz.section = 'A';
    strcpy(emtiaz.name, n);

    cout << emtiaz.name;
    return 0;
}
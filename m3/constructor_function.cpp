#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int cls;
        int roll;
        char section;

    Student( char * n, int cl, int rl, char s )
    {
        strcpy(name, n);
        cls = cl;
        roll = rl;
        section = s;
    }
};
int main()
{
    Student emi("Imtiazul Islam", 12, 01, 'A');
    cout << emi.name;
    return 0;
}
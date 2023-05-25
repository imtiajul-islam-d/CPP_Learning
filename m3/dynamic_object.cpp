#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int cls;
        int roll;
        char section;
    Student(char * n, int cl, int rl, char sec)
    {
        strcpy(name, n);
        cls = cl;
        roll = rl;
        section = sec;
    }
};
int main()
{
    char name[100] = "Imtiazul Islam";
    Student * emi = new Student(name, 12, 01, 'A');
    cout << emi->name;
    return 0;
}
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
Student fun()
{
    char name[100] = "Md. Imtiazul Islam";
    Student emi(name, 12, 01, 'A');
    return emi;
}
int main()
{
    Student imtiaz = fun();
    cout << imtiaz.name;
    return 0;
}
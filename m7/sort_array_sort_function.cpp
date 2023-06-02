#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
        return true;
    else
        return false;
}
int main()
{
    Student a[2];
    for (int i = 0; i < 2; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }

    sort(a, a + 2, cmp);
    for (int i = 0; i < 2; i++)
    {
        cout << a[i].marks << endl;
    }

    return 0;
}
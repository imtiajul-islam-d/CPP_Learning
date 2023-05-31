#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
    Person(string nm, int ag)
    {
        name = nm;
        age = ag;
    }
    void test()
    {
        cout << "Testing" << endl;
    }
};
int main()
{
    Person emi("Imtiazul Islam", 28);
    cout << emi.name << " " << emi.age << endl;  
    emi.test();
    return 0;
}
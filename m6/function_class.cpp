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
    int countAge(int one, int two)
    {
        return one + two;
    }
};
int main()
{
    Person emi("Imtiazul Islam", 28);
    cout << emi.name << " " << emi.age << endl;  
    emi.test();
    int plus = emi.countAge(30, 50);
    cout << plus << endl;
    return 0;
}
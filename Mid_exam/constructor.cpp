#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    char name[100];
    float height;
    int age;
    Person(char *n, float hei, int ag)
    {
        strcpy(name, n);
        height = hei;
        age = ag;
    }
};
int main()
{
    Person *imtiaz = new Person("Imtiazul Islam", 6.1, 28);
    Person *ishtiaqul = new Person("Ishtiaqul Islam", 6.2, 22);
    if (imtiaz->age > ishtiaqul->age)
    {
        cout << imtiaz->name << endl;
    }
    else
    {
        cout << ishtiaqul->name << endl;
        
    }

    return 0;
}
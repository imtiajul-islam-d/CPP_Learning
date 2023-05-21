#include <iostream>
using namespace std;
int min(int a, int b)
{
    if(a>b) return b;
    else return a;
}
int main()
{
    int a, b;
    cin>> a >> b;
    int min_number = min(a, b);
    cout<< min_number;
    return 0;
}
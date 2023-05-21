#include <iostream>
#include <algorithm>
using namespace std;
// int min(int a, int b)
// {
//     if(a>b) return b;
//     else return a;
// }
int main()
{
    int a, b;
    cin>> a >> b;
    int min_number = min(a, b);
    int max_number = max(a, b);
    cout<< min_number << " " << max_number;
    return 0;
}
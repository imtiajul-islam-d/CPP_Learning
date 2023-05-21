#include <iostream>
using namespace std;
int main()
{
    int val;
    cin>>val;
    switch (val)
    {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        default:
            cout << "Please enter a valid input";
        
    }
    return 0;
}
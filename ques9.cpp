// C++ program to find the maximum of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int a, b, Max;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Max = a > b ? a : b;
    cout << Max << " is greater";
    return 0;
}
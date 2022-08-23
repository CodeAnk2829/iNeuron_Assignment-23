// C++ program to calculate an average of 3 numbers.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    float avg;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    avg = (a + b + c) / 3.0;
    cout << "Average of the three numbers is " << avg;
    return 0;
}
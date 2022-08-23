// C++ program to calculate the area of a circle
#include <iostream>
using namespace std;
int main()
{
    int r;
    float area;
    cout << "Enter radius: ";
    cin >> r;
    area = 3.14 * r * r;
    cout << "The area of the given circle is " << area;
    return 0;
}
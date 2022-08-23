// C++ program to calculate the volume of a cuboid.
#include <iostream>
using namespace std;
int main()
{
    int l, b, h, VolOfCuboid;
    cout << "Enter length, breadth and height: ";
    cin >> l >> b >> h;
    VolOfCuboid = l * b * h;
    cout << "The volume of cuboid is " << VolOfCuboid;
    return 0;
}
// C++ program to add all the numbers of an array of size 10.
#include <iostream>
using namespace std;
int main()
{
    int a[10], sum = 0;
    cout << "Enter 10 numbers:-" << endl;
    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    cout << "Sum of the elements of the given array is " << sum ;
    return 0;
}
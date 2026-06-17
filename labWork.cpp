#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double value = 123.456789;

    cout << "Using setw:" << endl;
    cout << setw(15) << value << endl;

    cout << "\nUsing fixed and setprecision:" << endl;
    cout << fixed << setprecision(2) << value << endl;

    return 0;
}

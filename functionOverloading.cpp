//overload the funciton named area, that calculate the area of circle, rectangle, and triangle (hw)

#include <iostream>

using namespace std;


void Area(float x)
{
    cout << x * x * 3.1415 << endl;
}

void Area(float x, float y)
{
    cout << x * y << endl;
}

int main()
{
    Area(5.5);
    Area(5,10);
    return 0;
}
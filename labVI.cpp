#include <iostream>

using namespace std;
class Fruits
{
private:
    int apple;
    int mango;
    int orange;

public:
    Fruits()
    {
        apple = 0;
        mango = 0;
        orange = 0;
    }

    Fruits(int a, int m, int o):apple(a), mango(m) , orange(o){}

    Fruits (int ap) //convert int to object of this class and set apple to that int value
    {
        this->apple = ap;
        this->mango = 0;
        this->orange = 0;
    }

    operator int();
    

    void show()
    {
        cout << "apple: " << apple << " mango: " << mango << " orange: " << orange << endl;
    }

    ~Fruits(){}
};

Fruits::operator int() //convert object to basic (returns apple)
{
    return apple;
}

int main()
{
    Fruits a = 10;

    a.show();

    int b = a;

    cout << "Value of b: " << b << endl;

    return 0;
}
//type conversion
//Write a simple program to convert user defined datatype USD into Basic Datatype float Nepali Rupees and Vice versa

#include <iostream>

using namespace std;

class USD
{
private:
    float dollar;
    const float rate;
public:
    USD():rate(0), dollar(0)
    {
    }

    USD(int usd):dollar(usd), rate(144)
    {
    }

    USD(float n):dollar(n), rate(144)
    {
        dollar = dollar / rate;
    }

    operator float const()
    {
        return dollar * rate;
    }

    void show () const
    {
        cout << "Dollar: " << dollar << endl;
    }
    ~USD()
    {

    }

};

int main()
{
    float NPR = 157.5;
    
    USD d = NPR;

    USD a(100);

    float N = a;

    d.show();
    a.show();

    cout << "NPR: " << N << endl;

    return 0;
}
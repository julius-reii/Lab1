//wap to input hour minute and second in an object and convert the object into basic datatype (second)

#include <iostream>

using namespace std;

class Time
{
private:
    int hour;
    int min;
    int sec;

public:
    Time()
    {
        hour = 0;
        min = 0;
        sec = 0;
    }

    Time(int h, int m, int s):hour(h), min(m), sec(s){}

    operator int();

    ~Time(){}
};

Time::operator int()
{
    int s = this->hour * 3600 + this->min * 60 + this->sec;

    return s;
}

int main()
{
    Time t(1, 2, 4);

    int sec = t;

    cout << "Second: " << sec << endl;
    return 0;
}
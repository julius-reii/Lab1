//create a class named time that represents time in second minute and hour
//overload the postfix unary operator to increment the object

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
        this->hour = 0;
        this->min = 0;
        this->sec = 0;
    }

    Time(int hour, int min, int sec)
    {
        this->hour = hour;
        this->min = min;
        this->sec = sec;
    }

    void operator++(int) // overloading unary postfix increment operator
    {
        this->sec++;
        if (this->sec>=60)
        {
            this->min++;
            this->sec -= 60;
        }
        this->min++;
        if (this->min>=60)
        {
            this->hour++;
            this->min -= 60;
        }
        this->hour++;
    }

    Time operator ++();


    void setTime(int hour = 0, int min = 0, int sec = 0)
    {
        this->hour = hour;
        this->min = min;
        this->sec = sec;
    }

    void showTime()
    {
        cout << "Hour: " << hour << " Minute: " << min << " Second: " << sec << endl;
    }

    ~Time()
    {

    }
};

inline Time Time::operator++()
{
    /*int s = sec + 1;
    int m = min + 1;
    int h = hour + 1;
    return Time(s, m, h);*/

    ++sec;
    ++min;
    ++hour;
    return *this; // returning the dereferenced calling object pointer
}

int main()
{
    Time t1(5, 10, 15), t2(0, 0, 0), t3;
    t1.showTime();
    t1++;
    t1.showTime();

    t2.showTime();
    t3 = ++t2;
    t2.showTime();
    t3.showTime();
    return 0;

}
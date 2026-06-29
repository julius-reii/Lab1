//create a class named time that represents time in second minute and hour
//overload the postfix unary operator to decrement the object
//overload the prefix unary decrement opereator
//return object through nameless object

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

    friend Time operator --(Time &, int);// prototype for friend function to overload postfix decrement operator

    friend Time operator --(Time &); // prototype for friend function to overload prefix decrement operator

    ~Time()
    {

    }
};

Time operator--(Time &a, int) // overloading postfix decrement operator
{
    Time temp;
    temp.hour = a.hour--;
    temp.min = a.min--;
    temp.sec = a.sec--;

    return temp; //returning via temporary variable
}

Time operator--(Time &a) // overloading prefix decrement operator
{
    --a.hour;
    --a.min;
    --a.sec;

    return a; //returning 
}

int main()
{
    Time t1(5, 10, 15), t2(1, 1, 1), t3;
    t1.showTime();
    t1--;
    t1.showTime();

    t2.showTime();
    t3 = --t2;
    t2.showTime();
    t3.showTime();
    return 0;

}
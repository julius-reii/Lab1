#include <iostream>

using namespace std;

class Time
{
private:
    int day;
    int hour;
    int min;
    int sec;

public:
    Time()
    {
        this->day = 0;
        this->hour = 0;
        this->min = 0;
        this->sec = 0;
    }

    Time(int day, int hour, int min, int sec)
    {
        this->day = day;
        this->hour = hour;
        this->min = min;
        this->sec = sec;
    }

    void setTime(int day = 0, int hour = 0, int min = 0, int sec = 0)
    {
        this->day = day;
        this->hour = hour;
        this->min = min;
        this->sec = sec;
    }

    void getTime()
    {
        cout << "Day: " << day << " Hour: " << hour << " Min: " << min << " Sec: " << sec << endl;
    }

    Time add(Time t);

    ~Time()
    {
        cout << "Destructor Called" << endl;
    }

};


Time Time::add(Time t)
{
// 1. Calculate seconds and carry to minutes
    int total_sec = this->sec + t.sec;
    int carry_min = total_sec / 60;
    int final_sec = total_sec % 60;

    // 2. Calculate minutes (including carry) and carry to hours
    int total_min = this->min + t.min + carry_min;
    int carry_hour = total_min / 60;
    int final_min = total_min % 60;

    // 3. Calculate hours (including carry) and carry to days
    int total_hour = this->hour + t.hour + carry_hour;
    int carry_day = total_hour / 24;
    int final_hour = total_hour % 24;

    // 4. Calculate final days
    int final_day = this->day + t.day + carry_day;

    return Time(final_day, final_hour, final_min, final_sec);
}

int main()
{
    Time t1, t2(5, 30, 25, 89), t3(2, 35, 28, 90);

    t1 = t2.add(t3);

    t1.getTime();

    return 0;
}
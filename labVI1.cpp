//wap to convert float into year and month 1.5 = 1 year 5 month

#include <iostream>
#include <cmath>
using namespace std;
class Date
{
private:
    int year;
    int month;
public:
    Date()
    {
        year = 0;
        month = 0;
    }

    Date(int y, int m):year(y), month(m){}

    Date(float a)
    {
        
        this->year = (int) a;
        this->month = round((a - this->year) * 10);
    }

    void show()const
    {
        cout << "Year: " << year << " Month: " << month << endl;
    }

    ~Date(){}
};


int main()
{
    float t;

    cout << "Enter year, month: ";
    cin >> t;

    Date a = t;

    a.show();

    return 0;

}

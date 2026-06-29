#include <iostream>
using namespace std;
class Distance {
private:
    int meters;
public:
    explicit Distance(int m)
    {
        meters = m;
    }

    friend void printDistance(Distance);
};

void printDistance(Distance d)
{
    std::cout << "Distance: " << d.meters << " meters" << std::endl;
}

int main()
{
    // This works because of Implicit Conversion
    // The compiler sees an 'int' (10) 
    // calls Distance(10) for us
    printDistance(Distance(10));
    return 0;
}
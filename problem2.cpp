//Create a class name cube that represents its length and volume
// requirement it should have a constructor both defualt and prametraized to initialize the object and 
// it should have a static member function named number that keeps track the number of object created

#include <iostream>

using namespace std;

class cube
{
private:
    float length;
    float volume;
    static int count; //cannot initialize here

public:
    cube(float length)
    {
        this->length = length;
        this->volume = length * length * length;
        count++;
    }

    cube()
    {
        cout << "Default constructor" << endl;

        this->length = 0.0;
        this->volume = 0.0;
        count++;
    }

    static void number() //static functioin
    {
        cout<< "Total number of object: " << count <<endl;
    }

    void setLength(float length)
    {
        this->length = length;
        this->volume = length*length*length;
    }

    void showData()
    {
        cout << "Length: " << length << " Volume: " << volume << endl;

    }

    ~cube()
    {
        cout << "Destructor called" << endl;
        count--;
    }
};

int cube::count = 0; //initialized the static variable outside the class

int main()
{
    cube c1(10), c2(20), c3;
    c1.showData();
    c2.showData();
    c3.showData();
    cube::number(); // being static function, only class name is used to call it

    return 0;
}
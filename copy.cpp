//create a class named weight that represent weight in kg and gram, use friend function to add two objects

#include <iostream>

using namespace std;

class Num
{
private:
    int kg, gm;
public:
    Num()
    {
        kg = gm = 0;
    }

    Num(int k, int g):kg(k), gm(g) //initialiazation list
    {

    }

    Num add_num(Num);

    void show()
    {
        cout << "Kg: " << kg << " Gm: " << gm << endl;
    }

    friend Num add(Num x, Num y); // friend allows non member function to access private data members

    ~Num()
    {

    }
};

Num Num::add_num(Num n)
{
    int k, g;
    k = this->kg + n.kg;
    g = this->kg + n.gm;

    return Num(k, g); // nameless object
}

Num add(Num x, Num y)
{
    //logic

    int k,g;

    k = x.kg + y.kg;
    g = x.gm+ y.gm;

    return Num(k, g);
}

int main()
{

}
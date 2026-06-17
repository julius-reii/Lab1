//create a class named weight that represents weight in kg and grams
//create another class named price that represents price of the given weight
//member function is friend to another class
//create a friend function that is friend to the class weight
//determine the price of input weightice lazy dogk brown fox jumps over th

//The quick brown fox jumps over the lazy dog
//The qu

#include <iostream>
#include <string>

using namespace std;

class Weight;
class Price;

class Price
{
private:
    const float rate; //cant initialize values inside a class

    float total;

public:
    Price(float r = 0, float t = 0):rate(r), total(t) //initilaziation list
    {
    }

    void show() const 
    {
        cout <<"Rate: " << rate  << " Total: " << total << endl;
    }

    void calc(Weight &);
    
};


class Weight
{
private:
    float kg;
    float gm;

public:
    
    Weight()
    {
        kg = gm = 0;
    }

    Weight(float k, float g):kg(k),gm(g){

        int carry = gm / 1000;
        this->gm = gm - (carry * 1000);

        this->kg = k + carry;
    }

    void show()
    {
        cout << "Weight: " << kg << " kg " << gm << "gram" << endl;
    }

    friend void Price::calc(Weight&);

};



void Price::calc(Weight &w)
{
    float totalWeight = w.kg + float(w.gm / 1000);
     this->total = totalWeight * this->rate;

}

int main()
{
    Weight w(1, 500);
    Price p(1000, 0);
    p.calc(w);
    p.show();

    return 0;
}


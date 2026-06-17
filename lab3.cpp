//create a class named weight that represents weight in kg and grams
//create another class named price that represents price of the given weight
//create a friend function that is friend to both the class
//determine the price of input weight

#include <iostream>
#include <string>

using namespace std;

class Weight;
class Price;

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

    friend void calc(Weight& w, Price &p);
};

class Price
{
private:
    const float rate; //cant initialize values inside a class

    float total;

public:
    Price(float r = 0, float t = 0):rate(r), total(t) //can use initialization list to initialize constants in a class
    {
          //immutable object (cannot be changed, cannot use assignment operator), mutable can be changed (can use assignment operator)
    }

    void show() const //constant function, doesnt allow any change in variable, or use of assignment operator
    {
        cout <<"Rate: " << rate  << " Total: " << total << endl;
    }
    friend void calc(Weight &w, Price &p);
};

void calc(Weight &w, Price &p)
{
    float totalWeight = w.kg + float(w.gm / 1000);
     p.total = totalWeight*p.rate;

}

int main()
{
    Weight w(1, 400);
    Price p(1000, 0);
    calc(w, p);
    p.show();

    return 0;
}


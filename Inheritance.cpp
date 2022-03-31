#include <iostream>
using namespace std;

class Car  // Base Class or Super class
{
    private:
    int model;
    int color;
    string provider;

    public:
    void accelerate(){cout << "Car is Accelerating...\n";}
    void powerup(){cout << "Car is on...\n";}
};

class Honda
{
    public:
    void my_honda()
    {
        cout << "This is my Honda class\n";
    }
};

class Accord : protected Car, public Honda //inherited class - it inherits elements of Car class
{
    public:
    void get_acceleration()
    {
        accelerate();
    }
};


int main()
{
    Accord my_accord;
    my_accord.get_acceleration();
    my_accord.my_honda();
    cout << "Honda y Accord\n";
    return 0;
}
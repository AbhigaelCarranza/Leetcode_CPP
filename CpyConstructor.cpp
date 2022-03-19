#include <iostream>

using namespace std;

class Car
{
    private:
      string type;
      int model;
      string color;

    public:
      Car()
      {
          type = "MG6";
          model = 2022;
          color = "Blue";
      }
      Car(string user_type, int user_model, string user_color) : type(user_type), model(user_model), color(user_color){}

      Car(Car &obj)  // Copy constructor
      {              // obj is the object that you are trying to assign during second object declaration
          type = "Green";
          model = 2023;
          color = obj.color;
      }

      void bootup(){cout << "Car is turned on\n";}
      void brake(){cout << "Brake the car...\n";}
      string get_type()
      {
          return type;
      }
      int get_model()
      {
          return model;
      }
      string get_color()
      {
          return color;
      }

      string get_color(string new_color)
      {
          color = new_color;
          return color;
      }
};

int main()
{
    Car MG6, MG5("MG5", 2021, "red");
    MG5.get_color("purple");
    Car new_MG5(MG5);
    Car third_MG5 = MG5; //Same result of the process above

    cout << "Car MG5: " << MG5.get_type() << ", Color: " << MG5.get_color() << ", Model: " << MG5.get_model() << endl;
    cout << "Car MG6: " << MG6.get_type() << ", Color: " << MG6.get_color() << ", Model: " << MG6.get_model() << endl;
    cout << "Car MG5 copy: " << new_MG5.get_type() << ", Color: " << new_MG5.get_color() << ", Model: " << new_MG5.get_model() << endl;

}
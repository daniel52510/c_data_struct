#include <iostream>
using namespace std;
class Car {
public:
    string brand;
    string model;
    string type;
    int year;
    double weight;
};
int main() {
    Car car1;
    car1.brand = "BMW";
    car1.model = "M3";
    car1.type = "Coupe";
    car1.year = 2017;
    car1.weight = 2304.60;

    string food = "Pizza";
    string side = "French Fries";
    cout << "Memory Address from food: " << &food << endl;
    cout << "Memory Address from side: " << &side << endl;
    //creating and using pointers
    //This one pointer is pointing to the address
    // of the food variable but it can be changed to point
    // somewhere else.
    string *ptr = &food;
    cout << "Pointer Address: " << ptr << endl;
    cout << "Pointer Value: " << *ptr << endl;
    //This changes where the pointer is pointing to.
    ptr = &side;
    cout << "Current Pointer Address: " << ptr << endl;
    cout << "Current Pointer Value: " << *ptr << endl;

    *ptr = "Chicken Fingers";

    cout << "Current Pointer Address: " << ptr << endl;
    cout << "Current Pointer Value: " << *ptr << endl;

    cout << car1.year << " " << car1.brand << " " << car1.model;
    return 0;
}

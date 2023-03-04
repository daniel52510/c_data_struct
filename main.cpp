#include <iostream>
using namespace std;
int main() {
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
    return 0;
    //What is Object Oriented Programming?
}

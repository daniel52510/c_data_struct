#include "dataLib.h";
int main() {
    Array a;
    a.print_arr();
    cout << "\n";
    cout << "Step 1: Done" << endl;
    a.add_arr(2);
    a.print_arr();
     a.add_arr(4);
     a.print_arr();
     a.add_arr(6);
     a.print_arr();
    a.add_arr(3);
    a.print_arr();
    return 0;
}

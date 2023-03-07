#include "dataLib.h";
int main() {
    Array a;
    a.print_arr();
    a.add_arr(5);
    a.add_arr(1);
    a.add_arr(3);
    a.add_arr(2);
    a.insert_sort_arr();
    return 0;
}

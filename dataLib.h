//
// Created by Daniel Blazquez on 3/4/23.
//
#include <iostream>
using namespace std;

class Array {
public:
    int* size_ptr = &arr_size;
    int arr_size;
    int* arr = new int[arr_size];
    void set_arr_size(int as) {
        *size_ptr = as;
        cout << "array memory address: " << &arr_size << endl;
        cout << "array size value: " << arr_size << endl;
     }
    int get_arr_size() {
        return sizeof(arr)/sizeof(int);
    }
};

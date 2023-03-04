//
// Created by Daniel Blazquez on 3/4/23.
//
#include <iostream>
using namespace std;

class Array {
public:
    int* size_ptr = &arr_size;
    int arr_size;
    int* arr = new int[*size_ptr];
    void set_arr_size(int as) {
        *size_ptr = as;
        cout << "array memory address: " << &arr_size << endl;
        cout << "array size value: " << arr_size << endl;
     }
    int get_arr_size() {
        return sizeof(arr)/sizeof(int);
    }
    void print_arr() {
        cout << "Array Size: " << arr_size << endl;
        cout << "Array: {";
        for(int i = 0; i < arr_size; i++) {
            cout << arr[i];
            if(i != arr_size - 1) {
                 cout << ",";
            }
            else {
                cout << "}" << endl;
                break;
            }
        }
    }

};

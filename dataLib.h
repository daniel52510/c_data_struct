//
// Created by Daniel Blazquez on 3/4/23.
//
#include <iostream>
using namespace std;

class Array {
public:
    int* size_ptr = &arr_size;
    int arr_size;
    int* arr;
    Array() {
        start();
    }
    void print_arr() {
        cout << "Array: {";
        if(*size_ptr == 0) {
            cout << "}" << endl;
        }
        else {
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
    }
    void start() {
        arr = new int[*size_ptr];
        arr_size = 0;
    }
    void add_arr(int x) {
       if(*size_ptr == 0) {
           arr[0] = x;
       }
       else {
           int new_size = *size_ptr;
           //cout << "New Size: " << new_size << endl;
           int *temp = new int[new_size];
           for(int i = 0; i < new_size; i++) {
               temp[i] = arr[i];
           }
           delete[] arr;
           arr = temp;
           arr[new_size] = x;
       }
        *size_ptr += 1;
    }
};

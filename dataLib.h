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
    void delete_arr(int num, int pos) {
        if(*size_ptr == 0) {
            cout << "Sorry, there is nothing to delete!" << endl;
        } else {
            cout << "Size in Delete Function I: " <<*size_ptr << endl;
            for(int i = 0; i < *size_ptr; i++) {
                if(arr[i] == num and i == pos) {
                    *size_ptr = *size_ptr - 1;
                    for(int j = i; j < *size_ptr; j++) {
                        arr[j] = arr[j + 1];
                    }
                }
            }
            cout << "Size in Delete Function II: " <<*size_ptr << endl;
            int *temp = new int[*size_ptr];
            for(int k = 0; k < *size_ptr; k++){
                temp[k] = arr[k];
            }
            arr = temp;
        }
    }
    void insert_sort_arr() {
        //grab the element in the one location (not zero)
        //check variable(s) to the left, for each one that is greater,
        //you shift the number to the right until the number is
        //not greater than the left most element. You place it in front of it.
       cout << "Starting Array: " << endl;
       cout << "Size Pointer: " << *size_ptr << endl;
        print_arr();
       if(*size_ptr == 0 or *size_ptr == 1) {
           cout << "Error, there is nothing to sort!" << endl;
       }
       else {
           for(int i = 1; i < *size_ptr; i++) {
               int temp;
               int *temp_ptr = &temp;
               *temp_ptr = arr[i];
               for(int j = i - 1; j >= 0; j--) {
                   cout << "temp var: " << *temp_ptr << endl;
                   if(arr[j] > *temp_ptr){
                       //stays the same
                       while(arr[j] > *temp_ptr)
                       {
                           arr[j] = arr[j + 1];
                       }
                       *temp_ptr = arr[j];
                   }
                   else {
                        break;
                   }
               }
           }
           cout << "Ending Array: " << endl;
           print_arr();
       }

    }
};

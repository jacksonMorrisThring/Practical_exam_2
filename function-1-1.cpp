#include <iostream>
#include <string>
using namespace std;

int* create_ints(int num_vals){
    int[] array = new int[num_vals];

    

    for (int i = 0; i < num_vals; i++){
        array[i] = i*5;
    }

    int *ptr;
    ptr = array;

    for (int i = 0; i < num_vals; i++){
        cout << *(ptr+i) << " ";
    }

    cout << "ABOUT TO PRINT POINTER ADDRESS AND VALUE   from create array" << endl;
    cout << (ptr+0) <<  endl;
    cout << *(ptr+0) <<  endl;
    return  ptr;
}
void display_array(int *vals, int num_vals){

    cout << "\nValue of array[0] is " << *(vals + 0)<< endl;
    cout << "\nAddress of array[0] is " << (vals + 0)<< endl;
    for (int i = 0; i < num_vals; i++){
        if (i < num_vals-1){
            cout << *(vals + i) << " ";
        }
        else if (i == num_vals-1){
            cout << *(vals + i) << "\n";
        }
    }
}

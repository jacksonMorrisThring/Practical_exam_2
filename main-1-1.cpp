#include <iostream>
// #include <string>
using namespace std;

int* create_ints(int num_vals);
void display_array(int *vals, int num_vals);

int main(){
    int number = 5;
    int *ptr;
    ptr = create_ints(number);

    cout << "ABOUT TO PRINT POINTER ADDRESS AND VALUE from main" << endl;
    cout << (ptr+0) <<  endl;
    cout << *(ptr + 0) <<  endl;
    

    display_array(ptr, number);
    return 0;
}
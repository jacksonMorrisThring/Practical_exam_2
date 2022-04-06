#include <iostream>
#include <string>
using namespace std;
#include <iostream>

void odd_even(int vals[], int exmpl, int length);

int main(){
    int exmpl = 1;
    int array[] = {1,2,3,4,5};
    int length = 5;


    odd_even(array, exmpl, length);

    return 0;
}
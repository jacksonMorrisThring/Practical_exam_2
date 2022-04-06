#include <iostream>
#include <string>
using namespace std;

string lookup_spectrum(int day){
    string array[7];

    array[0] = "Red";
    array[1] = "Orange";
    array[2] = "Yellow";
    array[3] = "Green";
    array[4] = "Blue";
    array[5] = "Indigo";
    array[6] = "Violet";

       
    if (1 < day  &&  7> day){
        day = day -1;
        return array[day];
    }
    else{
        return "invalid colour";
    }
}

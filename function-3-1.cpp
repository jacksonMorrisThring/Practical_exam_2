#include <iostream>
#include <string>
using namespace std;

void odd_even(int vals[], int exmpl, int length){
     bool flag;
     if (exmpl %2 == 0){
         flag = true;
            // cout << i << ":" << vals[i];
        }
        else{
            //  cout << "works!";
            flag = false;
        }

    for (int i = 0; i < length; i ++){
       if (flag == true){
           if (i %2 == 0){
               if (i < length-1){
                    cout << i << ":" << vals[i] << "\n";
               }
               else{
                    cout << i << ":" << vals[i] << "\n";
               }
           }
       }
       else{
           if (i %2 != 0){
               if (i < length-1){
                    cout << i << ":" << vals[i] << "\n";
               }
               else{
                    cout << i << ":" << vals[i] << "\n";
               }
           }

       }
    }
}

#include <iostream>

using namespace std;

int main(void){
    int int_max = 2147483647;
    int int_min = -2147483648;

    cout << "int_max : " << int_max << endl;
    cout << "int_min : " << int_min << endl;
    
    int_max += 6;
    int_min += 6;

    cout << "After increment by 6 of int_min and int_max : " << endl;
    cout << "int_max : " << int_max << endl;
    cout << "int_min : " << int_min << endl;

    return 0;
}

/*
Output : 
int_max : 2147483647
int_min : -2147483648
After increment by 6 of int_min and int_max : 
int_max : -2147483643
int_min : -2147483642
*/
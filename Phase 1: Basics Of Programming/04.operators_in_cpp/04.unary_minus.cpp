#include <iostream>

using namespace std;

int main(){
    int num1 = 10;
    num1 = -num1; // converting  positive to negative number
    cout << "num1 : " << num1 << endl;

    int num2 = -20;
    num2 = -num2; // converting negative to positive number
    cout << "num2 : " << num2 << endl;

    return 0;
}

/*
Output : 
num1 : -10
num2 : 20
*/
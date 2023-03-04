#include <iostream>

using namespace std;

int main(){
    int num1 = 6;
    int num2 = -2;

    cout << num1 << "'s bitwise complement : " << ~num1 << endl;
    cout << num2 << "'s bitwise complement : " << ~num2 << endl;
    return 0;
}

/*
Output :
6's bitwise complement : -7
-2's bitwise complement : 1
*/
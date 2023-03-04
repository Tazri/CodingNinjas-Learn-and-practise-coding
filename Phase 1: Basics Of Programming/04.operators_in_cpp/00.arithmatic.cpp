#include <iostream>

using namespace std;

int main(){
    int a = 50, b = 20;

    cin >> a >> b;

    int addition = a + b;
    int subtraction = a - b;
    int mul = a * b;
    int division = a / b;
    int modulus = a%b;

    cout << "Addition : " << addition << endl;
    cout << "Subtraction : " << subtraction << endl;
    cout << "Mul : " << mul << endl;
    cout << "Division : " << division << endl;
    cout << "Modulus : " << modulus << endl;
    return 0;
}

/*
Output : 
35 20
Addition : 55
Subtraction : 15
Mul : 700
Division : 1
Modulus : 15
*/
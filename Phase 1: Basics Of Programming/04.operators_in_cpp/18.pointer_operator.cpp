#include <iostream>

using namespace std;

int main(){
    int a = 1, *b;
    b = &a;
    cout << "b : " << b << endl;
    cout << "&b : " << &b << endl;
    cout << "*b : " << *b << endl;

    return 0;
}

/*
output : 
b : 0x7ffdbf1ca2ac
&b : 0x7ffdbf1ca2a0
*b : 1
*/
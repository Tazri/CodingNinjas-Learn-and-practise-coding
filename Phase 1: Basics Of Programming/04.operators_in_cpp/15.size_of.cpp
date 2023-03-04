#include <iostream>

using namespace std;

int main(){
    int a;

    cout << "sizeof(int) : " << sizeof(int) << endl;
    cout << "sizeof(char) : " << sizeof(char) << endl;
    cout << "sizeof(float) : " << sizeof(float) << endl;
    cout << "sizeof(double) : " << sizeof(double) << endl;
    cout << "sizeof(a) : " << sizeof(a) << endl;

    return 0;
}

/*
Output : 
sizeof(int) : 4
sizeof(char) : 1
sizeof(float) : 4
sizeof(double) : 8
sizeof(a) : 4
*/
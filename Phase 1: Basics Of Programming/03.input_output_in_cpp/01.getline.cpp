#include <iostream>

using namespace std;

int main(){
    string name;

    cout << "What is your name : ";

    getline(cin,name);

    cout << "Hello, " << name << endl;
    return 0;
}

/*
What is your name : Arabi Arrowbeen
Hello, Arabi Arrowbeen
*/